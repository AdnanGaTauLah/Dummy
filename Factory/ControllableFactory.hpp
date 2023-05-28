#pragma once

#include "ObjectFactory.hpp"
#include "..\ControllableObject\ControllableRabbids.cpp"

class ControllableFactory : public ObjectFactory
{
private:
    /* data */
public:
    ControllableFactory();

    ControllableRabbids *CreateObject() override;
};
