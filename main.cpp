#include "gazelleview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GazelleView w;
    w.show();

    return a.exec();
}
