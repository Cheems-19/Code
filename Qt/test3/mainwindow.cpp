#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QColorDialog>
#include <QDebug>
#include <QDir>
#include <QFileDialog>
#include <QInputDialog>
#include <QTimer>
#include <QProgressDialog>
#include <QWizard>
#include <QVBoxLayout>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , _counter(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QColorDialog colorDlg(Qt::blue, this);
    colorDlg.setOption(QColorDialog::ShowAlphaChannel);
    colorDlg.exec();
    QColor selectColor = colorDlg.currentColor();
    qDebug() << "Color is " << selectColor << Qt::endl;
}


void MainWindow::on_pushButton_2_clicked()
{
    QString path = QDir::currentPath();
    QString title = tr("选择文件");
    QString filter = tr("文本文件(*.txt);;所有文件(*.*)");
    QString fileName = QFileDialog::getOpenFileName(this, title, path, filter);
    qDebug() << "file is " << fileName << Qt::endl;
}


void MainWindow::on_pushButton_3_clicked()
{
    bool ok = false;
    QInputDialog::getInt(this, tr("输入数字"), tr("输入一个数字"), 0, -200, 200, 1, &ok);
}


void MainWindow::on_pushButton_4_clicked()
{
    progressDialog = new QProgressDialog(tr("正在复制"), tr("取消复制"), 0, 100, this);
    progressDialog->setWindowTitle(tr("文件复制"));
    progressDialog->setWindowModality(Qt::ApplicationModal);
    _timer = new QTimer(this);
    connect(_timer, &QTimer::timeout, this, &MainWindow::on_updateProgressDialog);
    connect(progressDialog, &QProgressDialog::canceled, this, &MainWindow::on_cancelProgressDialog);
    _timer->start(1000);

}

void MainWindow::on_updateProgressDialog()
{
    ++_counter;
    if (_counter > 100) {
        _timer->stop();
        delete _timer;
        _timer = nullptr;
        delete progressDialog;
        progressDialog = nullptr;
        _counter = 0;
        return;
    } else
        progressDialog->setValue(_counter);
}

void MainWindow::on_cancelProgressDialog()
{
    _timer->stop();
    delete _timer;
    _timer = nullptr;
    delete progressDialog;
    progressDialog = nullptr;
}


void MainWindow::on_pushButton_5_clicked()
{
    QWizard wizard(this);
    QWizardPage page1(this);
    QVBoxLayout layout1;
    QLabel label1;
    label1.setText("我测尼玛");
    layout1.addWidget(&label1);
    page1.setTitle("我是顶针");
    page1.setLayout(&layout1);
    wizard.addPage(&page1);
    wizard.setWindowTitle("理塘");
//    wizard.show();
    wizard.exec();
}

