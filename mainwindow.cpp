
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QButtonGroup>
#include <QDebug>
#include <QToolBar>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //问题对话框question(父亲，标题，内容，按键类型，默认按键）
//            if(QMessageBox::Save==QMessageBox::question(this,"问题对话框","who is who?",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel))
//            {
//                    qDebug()<<"选择的是save";
//            }
//            else if(QMessageBox::Cancel==QMessageBox::question(this,"问题对话框","who is who?",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel))
//            {
//                qDebug()<<"选择的是Cancel";
//            }
    resize(230,240);
    QPushButton *button = new QPushButton(tr("Press me"),this);
    button->move(100,100);
    button->show();



}

MainWindow::~MainWindow()
{
    qDebug() << "Program is end";
}




// QObject::connect(w.button, SIGNAL(clicked()), &w, SLOT(changeText()));
