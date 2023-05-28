#pragma once

#include "Position\Position.cpp"
using namespace std;

class Object
{
public:
    Object();
    void SetPosition(Position *position);
    Position *GetPosition();

protected:
    Position *_position;
};