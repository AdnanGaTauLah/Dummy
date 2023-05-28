#pragma once

#include "..\Object.hpp"
#include <string>
#include <iostream>

class ControllableObject : public Object
{
public:
    ControllableObject();
    void TurnRight(Position *position);
    void TurnLeft(Position *position);
    void MoveForward(Position *position);
    void MoveBackward(Position *position);
};