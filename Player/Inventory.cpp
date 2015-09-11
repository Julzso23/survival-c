#include <stdafx.h>
#include <Player\Inventory.hpp>

Inventory::Inventory(int size)
    : maxSize(size)
{
}

Inventory::~Inventory()
{
}

bool Inventory::addItem(ItemBase& item)
{
    if (items.size() < maxSize)
    {
        items.insert(items.end(), item);
        return true;
    }
    else
        return false;
}

bool Inventory::removeItem(int id)
{
    if ((items.size > id) && (id >= 0))
        items.erase(items.begin() + id);
}

ItemBase& Inventory::getItem(int id)
{
    return items.at(id);
}
