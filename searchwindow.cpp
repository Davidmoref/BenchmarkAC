#include "searchwindow.h"
#include "ui_searchwindow.h"

SearchWindow::SearchWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchWindow)
{
    ui->setupUi(this);
    this->setFixedSize(500,620);
}

SearchWindow::~SearchWindow()
{
    delete ui;
}

void SearchWindow::on_volver_clicked()
{
    this->hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

