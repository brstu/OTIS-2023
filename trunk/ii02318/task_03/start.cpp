#include "start.h"
#include "ui_start.h"

Start::Start(QWidget *parents) :
    QWidget(parents),
    uiui(new Ui::Start)
{
    uiui->setupUi(this);
}

Start::~Start()
{
    delete uiui;
}

void Start::on_newGraph_clicked()
{
    windows = new Window(uiui->mdiArea);
    uiui->mdiArea->addSubWindow(windows);
    windows->show();
}

