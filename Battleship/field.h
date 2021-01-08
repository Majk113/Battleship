#pragma once

enum class FieldState
{
    Default = 0,
    Ship,
    HitShip,
    MissedHit
};

class Field
{
private:
    FieldState state = FieldState::Default;

public:
    Field() = default;
    bool placeShip();
    bool attackShip();
};
