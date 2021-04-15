#include "ApiMain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ApiMain w;
    w.show();
    return a.exec();
}
