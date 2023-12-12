#include "startwindow.h"
#include "ui_startwindow.h"

SW::SW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);
}

SW::~SW()
{
    delete ui;
}

void SW::on_newGraph_clicked()
{
    window = new MainWindow(ui->mdiArea);
    ui->mdiArea->addSubWindow(window);
    window->show();
}

