#include "menu.h"
#include "ui_menu.h"
#include <QLabel>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QMenu>
#include <QActionGroup>
#include <QAction>
#include <QKeySequence>
#include "myaction.h"

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);

    ui->dockWidget->setVisible(false);

    edit_menu = new QMenu(this);
    edit_menu = ui->menubar->addMenu(tr("编辑(&#)"));
    QActionGroup* group = new QActionGroup(this);
    QAction* left = group->addAction("left");
    left->setCheckable(true);
    left->setShortcut(QKeySequence("m+l"));

    QAction* right = group->addAction("right");
    right->setCheckable(true);
    right->setShortcut(QKeySequence("Ctrl+r"));

    QAction* center = group->addAction("center");
    center->setCheckable(true);
    center->setShortcut(QKeySequence("Ctrl+c"));

    edit_menu->addAction(left);
    edit_menu->addAction(right);
    edit_menu->addAction(center);

    MyAction* action = new MyAction(this);
    edit_menu->addAction(action);

    connect(action, &MyAction::getText, this, &menu::setText);


    ui->statusbar->showMessage("一眼顶针", 5000);
    QLabel* label = new QLabel("这是一个标签");
    ui->statusbar->addPermanentWidget(label);
}

menu::~menu()
{
    delete ui;
}

void menu::on_actionnewDock_D_triggered()
{
    ui->dockWidget->show();

}


void menu::on_actionnewFile_N_triggered()
{
    QTextEdit* text = new QTextEdit(this);
    auto childWindow = ui->mdiArea->addSubWindow(text);
    childWindow->setWindowTitle("文本输入框");
    childWindow->show();
}

void menu::setText(const QString & string)
{
    ui->textEdit->setText(string);
}

