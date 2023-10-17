#ifndef STACKDLG_H
#define STACKDLG_H
#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>

//堆栈窗体
class stackdlg:public QDialog
{
    Q_OBJECT
public:
    stackdlg(QWidget *parent=nullptr);
    ~stackdlg();

private:
    QListWidget *list;
    QStackedWidget *stack;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
};

#endif // STACKDLG_H
