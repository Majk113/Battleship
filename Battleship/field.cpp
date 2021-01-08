#include "field.h"

bool Field::placeShip()
{
    if(this->state == FieldState::Default)
    {
        this->state = FieldState::Ship;
        return true;
    }
    else
    {
        return false;
    }
}

bool Field::attackShip()
{
    if(this->state == FieldState::Ship)
    {
        this->state = FieldState::HitShip;
        return true;
    }
    else if (this->state == FieldState::Default)
    {
        this->state = FieldState::MissedHit;
        return false;
    }
    else
    {
        return false;
    }
}

