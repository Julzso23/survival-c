#pragma once

#include <Engine\AppBase.hpp>
#include <Player\Player.hpp>

class SurvivalGame : public JE::AppBase
{
private:
    Player player;

    void initialise(JE::Window& window);
    void draw(JE::Window& window) const;
public:
    SurvivalGame();
    ~SurvivalGame();
};
