#include "Position\Position.cpp"
#include "Factory\ControllableFactory.cpp"
#include "ControllableObject\ControllableRabbids.cpp"
#include <iostream>
using namespace std;

int main()
{
    // Kalo pakai constructor
    // ControllableObject babi = new ControllableObject();

    // ControllableObject babi;
    // babi.SetPosition(new Position(1, 2, Top));
    // babi.MoveForward(new Position(1, 2, Top));
    // cout << babi.GetPosition()->y;

    // ControllableRabbids rabbit;
    // rabbit.SetPosition(new Position(2, 3, Right));
    // cout << rabbit.GetPosition()->x << " " << rabbit.GetPosition()->y << " " << rabbit.GetPosition()->direction << "\n";
    // rabbit.Hit();

    // @brief create object with factory method
    // ControllableFactory *BuatObjek = new ControllableFactory();
    // ControllableRabbids *rabbid = BuatObjek->CreateObject();
    // cout << rabbid;

    Position *pos = new Position{1, 1, Direction::Bottom};
    ControllableFactory *pabrik = new ControllableFactory();
    ControllableObject *kelinciCO = pabrik->CreateObject();
    ControllableRabbids *kelinci = static_cast<ControllableRabbids *>(kelinciCO);

    return 0;
}