#include <iostream>
#include <string>

using namespace std;

class Mediator
{
public:
    virtual void notify(const std::string &message, const std::string &sender) = 0;
};

class Player : public Mediator
{
public:
    void notify(const std::string &message, const std::string &sender) override
    {
        if (message == "attack")
        {
            attack();
        }
        else if (message == "move")
        {
            move();
        }
    }

private:
    void attack()
    {
        // Do something to attack an enemy.
    }

    void move()
    {
        // Do something to move the player.
    }
};

class Enemy : public Mediator
{
public:
    void notify(const std::string &message, const std::string &sender) override
    {
        if (message == "attack")
        {
            takeDamage();
        }
        else if (message == "move")
        {
            chasePlayer();
        }
    }

private:
    void takeDamage()
    {
        // Reduce the enemy's health.
    }

    void chasePlayer()
    {
        // Move towards the player.
    }
};

int main()
{
    Mediator *mediator = new Player();

    Enemy enemy;

    mediator->notify("attack", "enemy");

    return 0;
}