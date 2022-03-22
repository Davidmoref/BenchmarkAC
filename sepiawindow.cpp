#include "sepiawindow.h"
#include "ui_sepiawindow.h"

SepiaWindow::SepiaWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SepiaWindow)
{
    ui->setupUi(this);
    this->setFixedSize(500,620);
}

SepiaWindow::~SepiaWindow()
{
    delete ui;
}

void SepiaWindow::on_pushButton_clicked()
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

