#include "battleship.h"
#include "./ui_battleship.h"

Battleship::Battleship(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Battleship)
{
    ui->setupUi(this);
    myMapper = new QSignalMapper(this);
    enemyMapper = new QSignalMapper(this);
    initializeBoards();
}

Battleship::~Battleship()
{
    delete ui;
}

void Battleship::slotFun(int value)
{
    qDebug() << "Clicked my: " << value << "\n";
}

void Battleship::slotFun2(int value)
{
    qDebug() << "Clicked enemy: " << value << "\n";
}

void Battleship::initializeBoards()
{
    for (int i=0; i<10; ++i)
    {
        for(int j=0; j<10; j++)
        {
            myBoard[i][j] = new QPushButton(this);
            ui->myGridLayout->addWidget(myBoard[i][j], i, j);
            myMapper->setMapping(myBoard[i][j], ((10*i) + j));
            connect(myBoard[i][j], &QPushButton::clicked, myMapper, static_cast<void(QSignalMapper::*)()>(&QSignalMapper::map));
        }
    }
    connect(myMapper, &QSignalMapper::mappedInt, this, &Battleship::slotFun);

    for (int i=0; i<10; ++i)
    {
        for(int j=0; j<10; ++j)
        {
            enemyBoard[i][j] = new QPushButton(this);
            ui->enemyGridLayout->addWidget(enemyBoard[i][j], i, j);
            enemyMapper->setMapping(enemyBoard[i][j], ((10*i) + j));
            connect(enemyBoard[i][j], &QPushButton::clicked, enemyMapper, static_cast<void(QSignalMapper::*)()>(&QSignalMapper::map));
        }
    }
    connect(enemyMapper, &QSignalMapper::mappedInt, this, &Battleship::slotFun2);
}
