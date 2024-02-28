#ifndef MYACTION_H
#define MYACTION_H

#include <QObject>
#include <QWidgetAction>
#include <QLineEdit>

class MyAction : public QWidgetAction
{
    Q_OBJECT
public:
    explicit MyAction(QObject* parent = 0);
    ~MyAction();

protected:
    virtual QWidget *createWidget(QWidget *parent);

private:
    QLineEdit* edit;

private slots:
    void sendText();
signals:
    void getText(const QString&);
};

#endif // MYACTION_H
