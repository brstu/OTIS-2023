#include "start.h"
#include "ui_start.h"

StartWindow::StartWindow(QWidget *parent) :
    QWidget(parent),
    uiui(new Ui::StartWindow)
{
    uiui->setupUi(this);
}

StartWindow::~StartWindow()
{
    delete uiui;
}

void StartWindow::on_newGraph_clicked()
{
    windows = new MainWindow(uiui->mdiArea);
    uiui->mdiArea->addSubWindow(windows);
    windows->show();
}

