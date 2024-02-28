#include "register.h"
#include "ui_register.h"
#include "login.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::setLogin(const std::weak_ptr<Login> & login)
{
    _login = login;
}

void Register::on_pushButton_clicked()
{
    this->close();
    auto login_ptr = _login.lock();
    login_ptr->show();
}

