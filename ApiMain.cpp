#include "ApiMain.h"
#include "ui_ApiMain.h"

ApiMain::ApiMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ApiMain)
{
    ui->setupUi(this);
    qDebug() << MVPublic::getSerialNumber();

    qDebug() <<MVPublic::getMVSerialNumber();
}

ApiMain::~ApiMain()
{
    delete ui;
}

