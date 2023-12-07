#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "graphwindow.h"
#include <QMdiSubWindow>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    QString graphName;
    while (graphName.isEmpty())
    graphName = QInputDialog::getText(this, "Введите имя графа", "Имя:");
    loadSubWindow(graphName, new GraphWindow(graphName,this));
}

void MainWindow::loadSubWindow(QString graphName, QWidget *widget)
{

    auto window = ui->mdiArea->addSubWindow(widget);
    window -> setWindowTitle(graphName);
    window -> setWindowIcon(widget->windowIcon());
    window->resize(500,350);
    window -> show();
}

