#include "Board.h"

Board::Board(int s) : size(s) {}

void Board::addLadder(Ladder ladder) {
    ladders.push_back(ladder);
}

void Board::addSnake(Snake snake) {
    snakes.push_back(snake);
}

int Board::checkLadderOrSnake(int pos) {
    for (Snake snake : snakes) {
        if (snake.head == pos) {
            return snake.tail;
        }
    }
    for (Ladder ladder : ladders) {
        if (ladder.start == pos) {
            return ladder.end;
        }
    }
    return pos;
} 