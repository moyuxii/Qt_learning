#ifndef DOCKWINDOW_H
#define DOCKWINDOW_H

#include <QMainWindow>
//停靠窗口
class dockWindow:public QMainWindow
{
    Q_OBJECT
public:
    dockWindow(QWidget *parent = nullptr);
    ~dockWindow();
};

#endif // DOCKWINDOW_H
