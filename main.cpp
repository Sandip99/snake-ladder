#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "Game.h"

using namespace std;

int main() {
    Game game;
    game.addPlayer("Alice");
    game.addPlayer("Bob");
    game.setup();
    game.startGame();
    return 0;
}
