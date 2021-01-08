#include "battleship.h"
#include "./ui_battleship.h"

Battleship::Battleship(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Battleship)
{
    ui->setupUi(this);
    myMapper = new QSignalMapper(this);
    enemyMapper = new QSignalMapper(this);
    logger = new Logger(ui->logTextWindow);

    initializeBoards();
    initializeFields();

    communication = new Communication(logger);
    connect(ui->serverButton, &QPushButton::clicked, communication, &Communication::createServer);
    connect(ui->clientButton, &QPushButton::clicked, communication, &Communication::createClient);

    logger->addToLog("Battleship initialized!");
}

Battleship::~Battleship()
{
    delete ui;
}

void Battleship::clickedMyBoard(int coords)
{
    QString tempLog = "Clicked my: ";
    tempLog.append(QVariant(coords).toString());
    logger->addToLog(tempLog);
    if(engine.placeShip(coords))
    {
        myBoard[coords/10][coords%10]->setStyleSheet("QPushButton{ background-color: blue }");
    }
}

void Battleship::clickedEnemyBoard(int value)
{
    QString tempLog = "Clicked enemy: ";
    tempLog.append(QVariant(value).toString());
    logger->addToLog(tempLog);

    Message *msg = new Message(MessageType::Attack, value);
    char *charArr = reinterpret_cast<char*>(msg);
    QByteArray temp(charArr, sizeof(Message));
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
    connect(myMapper, &QSignalMapper::mappedInt, this, &Battleship::clickedMyBoard);

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

    connect(enemyMapper, &QSignalMapper::mappedInt, this, &Battleship::clickedEnemyBoard);
    connect(enemyMapper, &QSignalMapper::mappedInt, this, &Battleship::changeButtonsColour);
}


void Battleship::changeButtonsColour(int value)
{
    enemyBoard[value/10][value%10]->setStyleSheet("QPushButton{ background-color: blue }");
}
