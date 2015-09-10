#pragma once

#include <Engine\Window.hpp>
#include <SFML\Window\Mouse.hpp>
#include <SFML\Window\Keyboard.hpp>

namespace JE
{
    class AppBase
    {
    private:
        Window window;
        sf::Clock clock;

        virtual void initialise(Window& window);
        virtual void update(float dt);
        virtual void draw(const Window& window) const;

        virtual void mouseMoved(sf::Vector2i position);
        virtual void mousePressed(sf::Mouse::Button button, sf::Vector2i position);
        virtual void mouseReleased(sf::Mouse::Button button, sf::Vector2i position);

        virtual void keyPressed(sf::Keyboard::Key key);
        virtual void keyReleased(sf::Keyboard::Key button);
    public:
        AppBase();
        virtual ~AppBase();

        void run();
    };
}
