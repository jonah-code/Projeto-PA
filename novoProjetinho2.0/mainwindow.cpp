#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSliderRx,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudarx(int)));

    connect(ui->horizontalSliderRy,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudary(int)));

    connect(ui->horizontalSliderRz,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudarz(int)));

    connect(ui->horizontalSlidercx,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaDimxq(int)));

    connect(ui->horizontalSlidercy,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaDimyq(int)));

    connect(ui->horizontalSlidercz,
            SIGNAL(valueChanged(int)),
            ui->widget,
            SLOT(mudaDimzq(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}



