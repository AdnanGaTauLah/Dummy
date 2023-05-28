#pragma once

#include "..\Object.hpp"

class ObjectFactory
{
public:
    ObjectFactory();

    virtual Object *CreateObject();
};
