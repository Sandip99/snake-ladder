#include "Game.h"
#include "stdlib.h"
#include "iostream"

Game::Game() : board(100), currentTurn(0) {}

int Game::rollDice() {
    return (rand() % 6) + 1;
}

void Game::setup() {
    board.addSnake(Snake(17, 7));
    board.addSnake(Snake(54, 34));
    board.addSnake(Snake(62, 19));
    board.addLadder(Ladder(3, 22));
    board.addLadder(Ladder(15, 44));
    board.addLadder(Ladder(70, 91));
}

void Game::addPlayer(std::string n) {
    players.push_back(n);
}

void Game::startGame() {
    srand((unsigned)time(0));
    bool gameWon = false;
    while (!gameWon) {
        Player &currentPlayer = players[currentTurn];
        int diceRoll = rollDice();
        int currPos = currentPlayer.getPosition();
        currentPlayer.move(diceRoll);
        currentPlayer.position = board.checkLadderOrSnake(currentPlayer.position);
        std::cout << currentPlayer.name << " rolled a " << diceRoll << " and moved from " << currPos << " to " << currentPlayer.getPosition() << "\n";
        if (currentPlayer.getPosition() == 100) {
            std::cout << currentPlayer.name << " won the game!!\n";
            gameWon = true;
            break; 
        }
        currentTurn = (currentTurn + 1) % players.size();
    }
}