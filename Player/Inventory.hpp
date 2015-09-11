#pragma once

#include <stdafx.h>
#include <Items\ItemBase.hpp>

class Inventory
{
private:
    std::vector<ItemBase> items;
    int maxSize;
public:
    Inventory(int size);
    ~Inventory();

    bool addItem(ItemBase& item);
    bool removeItem(int id);
    ItemBase& getItem(int id);
};
