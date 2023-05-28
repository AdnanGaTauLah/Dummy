#pragma once
#include "..\Enums\Enums.hpp"

using namespace std;

struct Position
{
    int x, y;
    Direction direction = Direction::None;

    Position(int x, int y, Direction dir)
    {
        this->x = x;
        this->y = y;
        this->direction = dir;
    }
};