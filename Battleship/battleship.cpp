#include "battleship.h"
#include "ui_battleship.h"

Battleship::Battleship(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Battleship)
{
    ui->setupUi(this);
}

Battleship::~Battleship()
{
    delete ui;
}

