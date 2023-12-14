#include "startwindow.h"
#include "ui_startwindow.h"

StartWindow::StartWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);
}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::on_newGraph_clicked()
{
    window = new MainWindow(ui->mdiArea);
    ui->mdiArea->addSubWindow(window);
    window->show();
}

