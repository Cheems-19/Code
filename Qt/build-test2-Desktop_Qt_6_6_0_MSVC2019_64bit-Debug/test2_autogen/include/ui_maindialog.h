/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_mainDialog
{
public:

    void setupUi(QDialog *mainDialog)
    {
        if (mainDialog->objectName().isEmpty())
            mainDialog->setObjectName("mainDialog");
        mainDialog->resize(800, 600);

        retranslateUi(mainDialog);

        QMetaObject::connectSlotsByName(mainDialog);
    } // setupUi

    void retranslateUi(QDialog *mainDialog)
    {
        mainDialog->setWindowTitle(QCoreApplication::translate("mainDialog", "mainDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainDialog: public Ui_mainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
