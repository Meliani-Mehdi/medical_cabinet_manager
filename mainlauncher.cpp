#include "mainlauncher.h"
#include "./ui_mainlauncher.h"

mainLauncher::mainLauncher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainLauncher)
{
    ui->setupUi(this);
}

mainLauncher::~mainLauncher()
{
    delete ui;
}
