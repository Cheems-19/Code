#include "childdialog.h"
#include "ui_childdialog.h"


childDialog::childDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::childDialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &childDialog::doSomething);
}

childDialog::~childDialog()
{
    delete ui;
}

void childDialog::doSomething()
{
    this->hide();
    emit displayMain();
}
