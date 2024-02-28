#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
class QMenu;

namespace Ui {
class menu;
}

class menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_actionnewDock_D_triggered();

    void on_actionnewFile_N_triggered();

    void setText(const QString&);

private:
    Ui::menu *ui;
    QMenu* edit_menu;
};

#endif // MENU_H
