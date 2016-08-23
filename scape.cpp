#include "scape.h"
#include "ui_scape.h"

scape::scape(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scape)
{
    ui->setupUi(this);
}

scape::~scape()
{
    delete ui;
}
