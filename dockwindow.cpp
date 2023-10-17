#include "dockwindow.h"
#include <QTextEdit>
#include <QDockWidget>
dockWindow::dockWindow(QWidget *parent):QMainWindow(parent)
{
    QTextEdit *textMain = new QTextEdit(this);
    textMain->setText("Mian Window");
    textMain->setAlignment(Qt::AlignCenter);
    setCentralWidget(textMain);
    //停靠窗口1
    QDockWidget *dock = new QDockWidget(tr("DockWindow1"),this);
    //设置停靠窗口特性 setFeatures
    dock->setFeatures(QDockWidget::DockWidgetMovable);
    //设置停靠创建允许区域 setAllowedAreas
    dock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit *te1 = new QTextEdit();
    te1->setText(tr("Window1,The dock widget can move in left or righe area"));
    dock->setWidget(te1);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    //停靠窗口1
    dock = new QDockWidget(tr("DockWindow2"),this);
    dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
    QTextEdit *te2 = new QTextEdit();
    te2->setText(tr("Window2,The dock widget can be closed or float"));
    dock->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea,dock);

    //停靠窗口3
    dock = new QDockWidget(tr("DockWindow3"),this);
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit *te3 = new QTextEdit();
    te3->setText(tr("Window3,do anything"));
    dock->setWidget(te3);
    addDockWidget(Qt::TopDockWidgetArea,dock);

}


dockWindow::~dockWindow(){

}
