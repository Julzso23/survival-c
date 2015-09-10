#include <stdafx.h>
#include <Engine\AppBase.hpp>
#include <SFML\Window\Event.hpp>

namespace JE
{
    AppBase::AppBase() : window(sf::VideoMode::getDesktopMode(), "Window Title", sf::Style::None) {}
    AppBase::~AppBase() {}

    void AppBase::initialise(Window& window) {}
    void AppBase::update(float dt) {}
    void AppBase::draw(const Window & window) const {}
    void AppBase::mouseMoved(sf::Vector2i position) {}
    void AppBase::mousePressed(sf::Mouse::Button button, sf::Vector2i position) {}
    void AppBase::mouseReleased(sf::Mouse::Button button, sf::Vector2i position) {}
    void AppBase::keyPressed(sf::Keyboard::Key key) {}
    void AppBase::keyReleased(sf::Keyboard::Key button) {}

    void AppBase::run()
    {
        initialise(window);

        while (window.isOpen())
        {
            sf::Event e;
            while (window.pollEvent(e))
            {
                switch (e.type)
                {
                case sf::Event::MouseMoved:
                    mouseMoved(sf::Vector2i(e.mouseMove.x, e.mouseMove.y));
                    break;
                case sf::Event::MouseButtonPressed:
                    mousePressed(e.mouseButton.button, sf::Vector2i(e.mouseButton.x, e.mouseButton.y));
                    break;
                case sf::Event::MouseButtonReleased:
                    mouseReleased(e.mouseButton.button, sf::Vector2i(e.mouseButton.x, e.mouseButton.y));
                    break;
                case sf::Event::KeyPressed:
                    keyPressed(e.key.code);
                    break;
                case sf::Event::KeyReleased:
                    keyReleased(e.key.code);
                    break;
                default:
                    break;
                }
            }

            update(clock.restart().asSeconds());

            window.clear(sf::Color::White);
            draw(window);
            window.display();
        }
    }
}
