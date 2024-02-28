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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *childDialog)
    {
        if (childDialog->objectName().isEmpty())
            childDialog->setObjectName("childDialog");
        childDialog->resize(400, 300);
        pushButton = new QPushButton(childDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 170, 80, 24));
        pushButton_2 = new QPushButton(childDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 170, 80, 24));
        label = new QLabel(childDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 40, 171, 61));

        retranslateUi(childDialog);
        QObject::connect(pushButton_2, &QPushButton::clicked, childDialog, qOverload<>(&QDialog::reject));
        QObject::connect(pushButton, &QPushButton::clicked, childDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(childDialog);
    } // setupUi

    void retranslateUi(QDialog *childDialog)
    {
        childDialog->setWindowTitle(QCoreApplication::translate("childDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("childDialog", "\350\277\233\345\205\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("childDialog", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("childDialog", "\345\255\220\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class childDialog: public Ui_childDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG_H
