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
    logger->addToLog("Battleship initialized!");
}

Battleship::~Battleship()
{
    delete ui;
}

void Battleship::slotFun(int value)
{
    QString tempLog = "Clicked my: ";
    tempLog.append(QVariant(value).toString());
    logger->addToLog(tempLog);

    QByteArray temp = QByteArray::number(value);
    socket->write(temp);
}

void Battleship::slotFun2(int value)
{
    QString tempLog = "Clicked enemy: ";
    tempLog.append(QVariant(value).toString());
    logger->addToLog(tempLog);
}

void Battleship::slotFun3()
{
    logger->addToLog("Connected to client!");
    socket = server->nextPendingConnection();
    server->close();
}

void Battleship::slotFun4()
{
    logger->addToLog("Connected to server!");
}

void Battleship::slotFun5()
{
    QByteArray arr;
    int availabel = socket->bytesAvailable();
    if(availabel)
    {
        logger->addToLog("Bytes available");
        arr.append(socket->readAll());
    }

    int tempor = arr.toInt();
    QString str = "I received from enemy: ";
    str.append(QString::number(tempor));
    logger->addToLog(str);
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
    connect(ui->serverButton, &QPushButton::clicked, this, &Battleship::createServer);
    connect(ui->clientButton, &QPushButton::clicked, this, &Battleship::createClient);
}

void Battleship::createServer()
{
    logger->addToLog("Creating server");
    server = new QTcpServer();
    QHostAddress address = QHostAddress(0xc0a80104);
    connect(server, &QTcpServer::newConnection, this, &Battleship::slotFun3);
    if (!server->listen(address, 2137))
    {
        logger->addToLog("Error listening");
    }
}

void Battleship::createClient()
{
    logger->addToLog("Creating client");
    socket = new QTcpSocket();
    connect(socket, &QTcpSocket::connected, this, &Battleship::slotFun4);
    connect(socket, &QTcpSocket::readyRead, this, &Battleship::slotFun5);
    QHostAddress address = QHostAddress(0xc0a80104);
    socket->bind(address, 2138);
    socket->connectToHost(address, 2137);
}
