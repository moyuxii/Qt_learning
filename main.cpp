#include "stackdlg.h"
#include "dialog.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    stackdlg *w=new stackdlg;
    w->show();
    return a.exec();
}
