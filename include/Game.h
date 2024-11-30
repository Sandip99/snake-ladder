#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Player.h"
#include "vector"
#include "string"

class Game {
    private:
        Board board;
        std::vector<Player> players;
        int rollDice();
        int currentTurn;
    
    public:
        Game();
        void addPlayer(std::string n);
        void startGame();
        void setup();
};

#endif