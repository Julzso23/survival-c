#pragma once

#include <SFML\Graphics\Sprite.hpp>
#include <Player\Inventory.hpp>

class Player : public sf::Sprite
{
private:
    Inventory inventory;
    int health;
public:
    Player();
    ~Player();

    Inventory* getInventory();
};
