#include <stdafx.h>
#include <Items\ItemBase.hpp>

ItemBase::ItemBase()
{
    setSize(sf::Vector2f(32.f, 32.f));
    setFillColor(sf::Color::Red);
}

ItemBase::~ItemBase()
{
}
