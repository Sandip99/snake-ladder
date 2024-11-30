#include "Player.h"
#include "string"

Player::Player(std::string n) : name(n), position(1) {}

void Player::move(int steps) {
    position += steps;
    if (position > 100) position = 100;
}

int Player::getPosition() {
    return position;
}