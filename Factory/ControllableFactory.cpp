#include "ControllableFactory.hpp"
    ControllableFactory::ControllableFactory()
    {

    }

    ControllableRabbids *ControllableFactory::CreateObject()
    {
        return new ControllableRabbids();
    }