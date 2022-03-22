#include "searchwindow.h"
#include "ui_searchwindow.h"
#include <iostream>

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

void SearchWindow::algoritmo(){

    int n, i, A[30], num, primero, ultimo, medio;
       std::cout<<"Ingrese un arreglo ordenado: ";
       std::cout<<"Cuantos elementos te gustaria ingresar?: ";
       std::cin>>n;

       for (i=0; i>A[i];i++)
       {
           std::cout<<"Ingrese el numero que desea buscar: ";
           std::cin>>num;
       }
       primero=0;
       ultimo=n-1;
       medio=(primero+ultimo)/2;
       while (primero<=ultimo)
       {
           if (A[medio]< num)
           {
               primero=medio+1;
           } else if (A[medio]== num)
           {
               std::cout<<" Se encontro la posición ";
               std::cout<<medio+1;
               break;
           }
           else {
               ultimo = medio - 1;
           }

           medio = (primero+ultimo)/2;
       }
       if (primero>ultimo)
       {
           std::cout<<num<<" no se encontro";
       }

}

