#include <stdafx.h>
#include <Player\Player.hpp>

Player::Player()
    : inventory(64)
{
    inventory.addItem(ItemBase());
}

Player::~Player()
{
}

Inventory& Player::getInventory()
{
    return inventory;
}
