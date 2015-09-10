#pragma once

#include <SFML\Graphics\RenderWindow.hpp>

namespace JE
{
    class Window : public sf::RenderWindow
    {
    private:
    public:
        Window(sf::VideoMode mode, const sf::String& title, sf::Uint32 style, const sf::ContextSettings& settings = sf::ContextSettings());
        ~Window();
    };
}
