#include <QApplication>
#include "remote11.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Ui::MainWindow remote;
    qDebug("~2");

    RemoteMainWindow window(&remote, nullptr);
    qDebug("~3");

    remote.setupUi(&window);
    qDebug("~4");

    window.resize(240 , 680);
    qDebug("~5");

    window.show();
    qDebug("~6");

    return QApplication::exec();
}
