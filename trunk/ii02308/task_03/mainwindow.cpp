#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QInputDialog>
#include <QMdiSubWindow>
#include "graph.h"

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


void MainWindow::on_newGraphButton_clicked()
{
    newWindow(new graph(this));
}

void MainWindow::newWindow(QWidget *widget)
{
    auto w =  ui->mdiArea->addSubWindow(widget);
    w -> setWindowIcon(widget->windowIcon());
    w -> resize(500,350);
    w -> show();
}
