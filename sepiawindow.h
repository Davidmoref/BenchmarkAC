#ifndef SEPIAWINDOW_H
#define SEPIAWINDOW_H

#include <QDialog>

namespace Ui {
class SepiaWindow;
}

class SepiaWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SepiaWindow(QWidget *parent = nullptr);
    ~SepiaWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SepiaWindow *ui;
};

#endif // SEPIAWINDOW_H
