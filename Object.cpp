#include "Object.hpp"

    Object::Object()
    {
        SetPosition(new Position(0, 0, Direction::Top));
    }

    void Object::SetPosition(Position *position)
    {
        _position = position;
    }

    Position *Object::GetPosition()
    {
        return _position;
    }