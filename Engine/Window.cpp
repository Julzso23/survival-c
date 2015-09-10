#include <stdafx.h>
#include <Engine/Window.hpp>

namespace JE
{
    Window::Window(sf::VideoMode mode, const sf::String& title, sf::Uint32 style, const sf::ContextSettings& settings)
        : sf::RenderWindow(mode, title, style, settings)
    {
    }

    Window::~Window()
    {
    }
}
