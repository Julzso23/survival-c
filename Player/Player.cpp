#include <stdafx.h>
#include <Player\Player.hpp>

Player::Player()
    : inventory(64)
{
    fputs(inventory.addItem(ItemBase()) ? "Added item to inventory." : "Failed to add item to inventory.", stdout);
}

Player::~Player()
{
}

Inventory* Player::getInventory()
{
    return &inventory;
}
