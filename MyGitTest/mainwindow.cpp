#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("XUY");
    ui->label_2->setText("SpOokY");
}

MainWindow::~MainWindow()
{
    delete ui;
}

