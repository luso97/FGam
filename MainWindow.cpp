//
// Created by Luis on 05/07/2019.
//

#include "MainWindow.h"
#include "MainLayout.h"

MainWindow::MainWindow()
        {
    QCoreApplication::processEvents();
    widget=new QWidget();
    showMaximized();

    QGridLayout  *layout=new MainLayout();
    widget->setLayout(layout);
    widget->setParent(this);
    widget->show();
}
void MainWindow::changeState(QLayout *layout) {
    widget->setLayout(layout);
}