/********************************************************************************
** Form generated from reading UI file 'childdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDDIALOG_H
#define UI_CHILDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_childDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *childDialog)
    {
        if (childDialog->objectName().isEmpty())
            childDialog->setObjectName("childDialog");
        childDialog->resize(400, 300);
        label = new QLabel(childDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 70, 91, 21));
        pushButton = new QPushButton(childDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 130, 131, 41));

        retranslateUi(childDialog);

        QMetaObject::connectSlotsByName(childDialog);
    } // setupUi

    void retranslateUi(QDialog *childDialog)
    {
        childDialog->setWindowTitle(QCoreApplication::translate("childDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("childDialog", "\350\277\231\346\230\257\345\255\220\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("childDialog", "\346\230\276\347\244\272\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class childDialog: public Ui_childDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG_H
