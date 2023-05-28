#include "ControllableObject.hpp"

    ControllableObject::ControllableObject()
    {
        SetPosition(new Position{0, 0, Top});
    }

    void ControllableObject::TurnRight(Position *position)
    {
        switch (_position->direction)
        {
        case Direction::Top:
            _position->direction = Right;
            break;
        case Direction::Bottom:
            _position->direction = Left;
            break;
        case Direction::Left:
            _position->direction = Top;
            break;
        case Direction::Right:
            _position->direction = Bottom;
            break;
        }
    }

    void ControllableObject::TurnLeft(Position *position)
    {
        switch (_position->direction)
        {
        case Direction::Top:
            _position->direction = Left;
            break;
        case Direction::Bottom:
            _position->direction = Right;
            break;
        case Direction::Left:
            _position->direction = Bottom;
            break;
        case Direction::Right:
            _position->direction = Top;
            break;
        }
    }

    void ControllableObject::MoveForward(Position *position)
    {
        switch (_position->direction)
        {
        case Direction::Top:
            _position->y--;
            break;
        case Direction::Bottom:
            _position->y++;
            break;
        case Direction::Left:
            _position->x--;
            break;
        case Direction::Right:
            _position->x++;
            break;
        }
    }

    void ControllableObject::MoveBackward(Position *position)
    {
        switch (_position->direction)
        {
        case Direction::Top:
            _position->y++;
            break;
        case Direction::Bottom:
            _position->y--;
            break;
        case Direction::Left:
            _position->x++;
            break;
        case Direction::Right:
            _position->x--;
            break;
        }
    }