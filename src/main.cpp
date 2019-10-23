#include "headers/login.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication ESPRIT_RP(argc, argv);
    ESPRIT_RP.setStyle(QStyleFactory::create("Fusion"));
    SetDatabase();
    CheckLogin();
    return ESPRIT_RP.exec();
}
