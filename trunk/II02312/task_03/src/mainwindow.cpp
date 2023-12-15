#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMouseEvent>
#include<fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), m_graphArea1(150, 300, 800, 700, false), m_graphArea2(1000, 300, 800, 700, true)
{   
    ui->setupUi(this);    
    initUI();
    loadFromFile();

    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateWindow);
    timer->start(10);

    ui->Graph1Name->setAlignment(Qt::AlignCenter);
    ui->Graph2Name->setAlignment(Qt::AlignCenter);
}

void MainWindow::loadFromFile()
{
    std::ifstream in("GraphSave.txt");

    if(!in.is_open())
    {
        qDebug() << "coudnt open file to load from!";
        return;
    }

    in >> m_graphArea1;
    in >> m_graphArea2;

    ui->Graph1Name->setText(m_graphArea1.getGraphName());
    ui->Graph2Name->setText(m_graphArea2.getGraphName());
    in.close();
}

void MainWindow::saveToFile()
{
    std::ofstream out("GraphSave.txt");

    if(!out.is_open())
    {
        qDebug() << "coudnt open file to save to!";
        return;
    }

    out << m_graphArea1;
    out << m_graphArea2;

    out.close();
}

void MainWindow::initUI()
{
    resize(1920, 1080);
    showFullScreen();

    ui->comboBox->addItem("1,2,3...");
    ui->comboBox->addItem("A,B,C...");
    ui->Graph1Name->setFontPointSize(15);
    ui->Graph2Name->setFontPointSize(15);
    ui->WeightText->setFontPointSize(15);
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setBrush(Qt::lightGray);
    painter.drawRect(0, 0, 1920, 1080);

    int fontSize = 15;

    QFont font("Arial", fontSize);
    QFontMetrics fontMetrics(font);

    painter.setFont(font);
    painter.setPen(Qt::black);

    QString weightStr = "Weight";

    int textX = 973 - fontMetrics.horizontalAdvance(weightStr) / 2;
    int textY = 130 + fontSize / 2;

    painter.drawText(textX, textY, weightStr);


    m_graphArea1.render(&painter);
    m_graphArea2.render(&painter);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    int comboIndex1 = ui->comboBox->currentIndex();
    int weight = ui->WeightText->toPlainText().toInt();
    bool hasWeight = ui->WeightText->toPlainText().length() > 0;
    m_graphArea1.onMousePressed(event, comboIndex1, weight, hasWeight);
    m_graphArea2.onMousePressed(event, comboIndex1, weight, hasWeight);

    QMainWindow::mousePressEvent(event);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    m_graphArea1.onMouseMoved(event);
    m_graphArea2.onMouseMoved(event);

    QMainWindow::mouseMoveEvent(event);
}

void MainWindow::updateWindow()
{
    QWidget::update();

    ui->Graph1Name->setFontPointSize(15);
    ui->Graph2Name->setFontPointSize(15);
    ui->WeightText->setFontPointSize(15);

    m_graphArea1.setGraphName(ui->Graph1Name->toPlainText());
    m_graphArea2.setGraphName(ui->Graph2Name->toPlainText());

    m_graphArea1.update();
    m_graphArea2.update();
}

MainWindow::~MainWindow()
{
    saveToFile();

    delete ui;
}

void MainWindow::on_clearArea1_clicked()
{
    m_graphArea1.clear();
}

void MainWindow::on_clearArea2_clicked()
{
    m_graphArea2.clear();
}

void MainWindow::on_ExportGraph1_clicked()
{
     m_graphArea1.exportGraphData();
}


void MainWindow::on_ExportGraph1_2_clicked()
{
    m_graphArea2.exportGraphData();
}


void MainWindow::on_ImportGraph1_clicked()
{
    m_graphArea1.importGraph();
}


void MainWindow::on_ImportGraph1_2_clicked()
{
    m_graphArea2.importGraph();
}


void MainWindow::on_pushButton_clicked()
{
    QCoreApplication::quit();
}


void MainWindow::on_pushButton_2_clicked()
{
    m_graphArea1.exportMatricies();
}


void MainWindow::on_pushButton_3_clicked()
{
    m_graphArea2.exportMatricies();
}

