#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class childDialog;

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
    void on_button_clicked();
    void displayMain();

private:
    Ui::MainWindow *ui;
    childDialog *_child_dialog;
};
#endif // MAINWINDOW_H
