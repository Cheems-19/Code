#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <memory>

class Register;
QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow, public std::enable_shared_from_this<Login>
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
    void initSignals();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Login *ui;
    std::shared_ptr<Register> _register;
};
#endif // LOGIN_H
