#include <stdafx.h>
#include <SurvivalGame.hpp>

SurvivalGame::SurvivalGame()
{
}

SurvivalGame::~SurvivalGame()
{
}

void SurvivalGame::initialise(JE::Window& window)
{
    window.create(sf::VideoMode::getDesktopMode(), "Survival Game", sf::Style::None);
}

void SurvivalGame::draw(JE::Window& window) const
{
    window.draw(*((Player)player).getInventory()->getItem(0));
}
