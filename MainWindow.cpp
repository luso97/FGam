//
// Created by Luis on 05/07/2019.
//

#include "MainWindow.h"
#include "MainLayout.h"
    QStackedWidget* MainWindow::stack= nullptr;
MainWindow::MainWindow()
        {
    stack=new QStackedWidget();
    showMaximized();
    QWidget* widgetStart = new QWidget();
    QGridLayout  *layout=new MainLayout();
    widgetStart->setLayout(layout);
    //MainWindow::widgetStart->setParent(this);
    this->setCentralWidget(stack);
    stack->addWidget(widgetStart);
    stack->setCurrentIndex(0);
}
void MainWindow::changeState(QLayout *layout) {
    QWidget *newWidget =new QWidget();
    newWidget->setLayout(layout);
    stack->addWidget(newWidget);
    stack->setCurrentIndex(1);



}