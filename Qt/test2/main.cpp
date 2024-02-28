#include "maindialog.h"
#include "childdialog.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainDialog w;
    childDialog childDlg;
    auto res = childDlg.exec();
    if (res == QDialog::Accepted) {
        w.show();
        a.exec();
    } else {
        qDebug() << "child exec res is " << res << Qt::endl;
        return 0;
    }
    return 0;
}
