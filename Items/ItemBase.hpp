#pragma once

#include <SFML\Graphics\RectangleShape.hpp>

class ItemBase : public sf::RectangleShape
{
private:
    sf::RectangleShape shape;
public:
    ItemBase();
    virtual ~ItemBase();
};
