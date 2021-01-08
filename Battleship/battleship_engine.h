#pragma once

#include "field.h"
#include "message.h"

#include <QObject>

class BattleshipEngine : public QObject
{
    Q_OBJECT
public:
    BattleshipEngine() {}
    virtual ~BattleshipEngine() {}
    bool placeShip(int coords);

private:
    Field myFields[10][10] = {};
    Field enemyFields[10][10] = {};

private slots:
    void enemyAttacked(int coords);

signals:
    void enemyMissed(int coords);
    void enemyHit(int coords);
};
