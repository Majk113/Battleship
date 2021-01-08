#include "battleship_engine.h"

void BattleshipEngine::enemyAttacked(int coords)
{
    if(myFields[coords/10][coords%10].attackShip())
    {
        emit enemyHit(coords);
    }
    else
    {
        emit enemyMissed(coords);
    }
}

bool BattleshipEngine::placeShip(int coords)
{
    return myFields[coords/10][coords%10].placeShip();
}

void attackEnemy(int coords)
{

}
