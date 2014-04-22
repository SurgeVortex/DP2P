#include "dp2pmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DP2PMainWindow w;
    w.show();

    return a.exec();
}
