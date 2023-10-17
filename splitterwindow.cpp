#include "splitterwindow.h"
#include <QSplitter>
#include <QTextEdit>
splitterWindow::splitterWindow(QWidget *parent):QSplitter(parent)
{
    //初始化一个分割窗口，内部为水平对其
    setOrientation(Qt::Horizontal);
    //分割窗口插入一个 TE
    QTextEdit *textLeft = new QTextEdit(QObject::tr("Left Widget"),this);
    //设置文本对齐方式
    textLeft->setAlignment(Qt::AlignCenter);
    //分割窗口插入一个分割窗口
    QSplitter *splitterRight = new QSplitter(Qt::Vertical,this);
    //设置内部分割窗口中的分割线是否实时更新显示
    splitterRight->setOpaqueResize(false);
    //内部分割窗口再插入两个TE
    QTextEdit *textUp = new QTextEdit(QObject::tr("Top Widget"),splitterRight);
    QTextEdit *textBottom = new QTextEdit(QObject::tr("Bottom Widget"),splitterRight);
    textBottom->setAlignment(Qt::AlignCenter);
    //设置第1个控件为可伸缩控件。第二个参数大于0表示可伸缩
    this->setStretchFactor(1,1);
}

splitterWindow::~splitterWindow(){

}
