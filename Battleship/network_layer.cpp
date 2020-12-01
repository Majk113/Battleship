#include "network_layer.h"


BattleshipSocket::BattleshipSocket()
{

}

void BattleshipSocket::initializeServer()
{
    address = QHostAddress();
    address.setAddress(0xc0a800c1);
    server = new QTcpServer();
    server->listen(address, 2137);
}

void BattleshipSocket::initializeClient()
{
    address = QHostAddress();
    address.setAddress(0xc0a800c1);
    client->bind(address, 2137);
    client->connectToHost(address, 2137);
}
