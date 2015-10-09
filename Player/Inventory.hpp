#pragma once

#include <stdafx.h>
#include <Items\ItemBase.hpp>

class Inventory
{
private:
    std::vector<ItemBase> items;
    unsigned int maxSize;
public:
    Inventory(unsigned int size);
    ~Inventory();

    bool addItem(ItemBase& item);
    bool removeItem(unsigned int id);
    ItemBase* getItem(unsigned int id);
};
