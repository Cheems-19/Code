#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "childdialog.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    _child_dialog(new childDialog(this))
{
    ui->setupUi(this);
    connect(_child_dialog, &childDialog::displayMain, this, &MainWindow::displayMain);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (_child_dialog) {
        delete _child_dialog;
    }
}

void MainWindow::on_button_clicked()
{
    this->hide();
    _child_dialog->show();
}

void MainWindow::displayMain()
{
    this->show();
}

