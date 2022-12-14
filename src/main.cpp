#include <assert.h>
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "menu.hpp"
#include "screens.hpp"

using namespace sf;
using namespace std;

int main(){
    vector<Screen *> screens;
    int selectedScreen = 0;

    RenderWindow app(VideoMode(1920, 1080), "Nene Quest");
    app.setFramerateLimit(60);

    assert(TITLE_SCREEN == 0 && GAME_SCREEN == 1 && GAME_OVER_1P == 2 &&
        GAME_OVER_2P == 3);
    
    screens.push_back(new Menu);
    screens.push_back(new Game);
    screens.push_back(new GameOver(ONE_PLAYER));
    screens.push_back(new GameOver(TWO_PLAYER));

    while (selectedScreen >= 0)
        selectedScreen = screens[selectedScreen]->run(app);

    return EXIT_SUCCESS;
}