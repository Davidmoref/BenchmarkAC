#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "searchwindow.h"
#include "sepiawindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_busqueda_clicked();
    void on_sepia_clicked();

private:
    Ui::MainWindow *ui;
    SearchWindow *searchwindow=new SearchWindow(this); //Solo se crea una ventana, en vez de todo el tiempo hacer new
    SepiaWindow *sepiawindow=new SepiaWindow(this);
};
#endif // MAINWINDOW_H
