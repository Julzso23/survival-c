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
