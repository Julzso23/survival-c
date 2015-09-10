#pragma once

#include <Engine\AppBase.hpp>

class SurvivalGame : public JE::AppBase
{
private:
    void initialise(JE::Window& window);
public:
    SurvivalGame();
    ~SurvivalGame();
};
