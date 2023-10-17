#include "stackdlg.h"
#include <QHBoxLayout>
stackdlg::stackdlg(QWidget *parent):QDialog(parent)
{
    list = new QListWidget(this);
    list->insertItem(0,tr("Window1"));
    list->insertItem(1,tr("Window2"));
    list->insertItem(2,tr("Window3"));

    label1 = new QLabel(tr("WindowTest1"));
    label2 = new QLabel(tr("WindowTest2"));
    label3 = new QLabel(tr("WindowTest3"));
    stack = new QStackedWidget(this);
   //依次压栈，序号从0开始
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);
    QHBoxLayout *mainLayout = new QHBoxLayout(this);
    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->addWidget(list);
    mainLayout->addWidget(stack,0,Qt::AlignHCenter);
    mainLayout->setStretchFactor(list,1);
     mainLayout->setStretchFactor(stack,3);
     //list选中不同item时，发送当前item的下标至槽。堆栈窗口接收到信号后，显示信号下标值对应的控件。
     connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));

}

stackdlg::~stackdlg(){

}
