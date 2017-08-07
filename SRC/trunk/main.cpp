#include "SystemWindow.h"
#include "logindlg.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SystemWindow w;
    LoginDlg lDlg;

        if(lDlg.exec()==QDialog::Accepted){
            w.show();
            return a.exec();
        }
        else return 0;

//    w.show();
//    returna.exec();
}
