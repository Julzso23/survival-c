#include <stdafx.h>
#include <Player\Inventory.hpp>

Inventory::Inventory(unsigned int size)
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

bool Inventory::removeItem(unsigned int id)
{
    if ((items.size() > id) && (id >= 0))
    {
        items.erase(items.begin() + id);
        return true;
    }
    else
        return false;
}

ItemBase& Inventory::getItem(unsigned int id)
{
    return items.at(id);
}
