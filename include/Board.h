#ifndef Board_H
#define Board_H

#include "Snake.h"
#include "Ladder.h"
#include "vector"

class Board {
    private:
        int size;
        std::vector<Snake> snakes;
        std::vector<Ladder> ladders;
    
    public:
        Board(int size = 100);
        void addSnake(Snake snake);
        void addLadder(Ladder ladder);
        int checkLadderOrSnake(int pos);
};

#endif