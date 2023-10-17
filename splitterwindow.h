#ifndef SPLITTERWINDOW_H
#define SPLITTERWINDOW_H

#include <QSplitter>
//分割窗口
class splitterWindow:public QSplitter
{
    Q_OBJECT
public:
    splitterWindow(QWidget *parent=nullptr);
    ~splitterWindow();
};

#endif // SPLITTERWINDOW_H
