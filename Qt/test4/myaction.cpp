#include "myaction.h"
#include <QSplitter>
#include <QLabel>

MyAction::MyAction(QObject* parent)
    : QWidgetAction(parent)
{
    // 创建行编辑器
    edit = new QLineEdit();
    connect(edit, &QLineEdit::returnPressed, this, &MyAction::sendText);
}

MyAction::~MyAction()
{

}

QWidget *MyAction::createWidget(QWidget *parent)
{
    QSplitter* splitter = new QSplitter(parent);
    QLabel* label = new QLabel(parent);
    label->setText("输入文本: ");
    splitter->addWidget(label);
    splitter->addWidget(edit);
    return splitter;
}

void MyAction::sendText()
{
    emit getText(edit->text());
    edit->clear();
}
