#include "firstwidget.h"
#include "./ui_firstwidget.h"

firstWidget::firstWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::firstWidget)
{
    ui->setupUi(this);
}

firstWidget::~firstWidget()
{
    delete ui;
}
