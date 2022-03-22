#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(500,200);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_busqueda_clicked()
{
    searchwindow->show();
    this->hide();
}


void MainWindow::on_sepia_clicked()
{
    sepiawindow->show();
    this->hide();
}

