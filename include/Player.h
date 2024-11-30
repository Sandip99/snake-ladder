#ifndef Player_H
#define Player_H

#include "string"

class Player {
    public:
        std::string name;
        int position;

        Player(std::string n);
        void move(int steps);
        int getPosition();
};

#endif