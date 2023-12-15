#include "graphwindow.h"
#include "ui_graphwindow.h"


GraphWindow::GraphWindow(QString name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphWindow)
{
    ui->setupUi(this);
    // Создание сцены
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    // Установка имени сцены
    graphName = name;
    bool ok;
    QStringList items;
    items << "Ориентированный" << "Неориентированный";
    // Получение типа графа
    while (!ok){
        key = QInputDialog::getItem(this, "Укажите вид графа", "", items, 0, false, &ok);
    }
}


GraphWindow::~GraphWindow()
{
    delete ui;
}












