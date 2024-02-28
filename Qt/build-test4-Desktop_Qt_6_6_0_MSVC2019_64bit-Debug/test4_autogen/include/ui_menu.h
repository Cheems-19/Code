/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QAction *actionnewFile_N;
    QAction *actionnewDock_D;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menu_F;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(800, 600);
        actionnewFile_N = new QAction(menu);
        actionnewFile_N->setObjectName("actionnewFile_N");
        actionnewDock_D = new QAction(menu);
        actionnewDock_D->setObjectName("actionnewDock_D");
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName("centralwidget");
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName("mdiArea");
        mdiArea->setGeometry(QRect(80, 100, 591, 241));
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu->setMenuBar(menubar);
        statusbar = new QStatusBar(menu);
        statusbar->setObjectName("statusbar");
        menu->setStatusBar(statusbar);
        dockWidget = new QDockWidget(menu);
        dockWidget->setObjectName("dockWidget");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        textEdit = new QTextEdit(dockWidgetContents);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(90, 20, 104, 70));
        dockWidget->setWidget(dockWidgetContents);
        menu->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu_F->menuAction());
        menu_F->addAction(actionnewFile_N);
        menu_F->addAction(actionnewDock_D);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "MainWindow", nullptr));
        actionnewFile_N->setText(QCoreApplication::translate("menu", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", nullptr));
        actionnewDock_D->setText(QCoreApplication::translate("menu", "\346\230\276\347\244\272\345\267\245\345\205\267\347\256\261(&D)", nullptr));
        menu_F->setTitle(QCoreApplication::translate("menu", "\346\226\207\344\273\266(&F)", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("menu", "\345\267\245\345\205\267\347\256\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
