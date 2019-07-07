#include <iostream>
#include <QtWidgets/QApplication>
#include "MainWindow.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    MainWindow window;

    window.show();
    printf("2");
    return app.exec();
    return 0;
}