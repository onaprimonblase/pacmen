#include "environment.h"


BoxState BOARDS [NB_BOARDS][BOARD_Y][BOARD_X] = {
    {
        { BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL },
        { BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE },
        { BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE },
        { BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL },
        { BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE },
        { BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE },
        { BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL },
        { BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE },
        { BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE },
        { BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL },
        { BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE },
        { BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::FREE },
        { BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL },
        { BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL }
    },
    {
        { BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL, BoxState::WALL, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::FREE, BoxState::WALL },
        { BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL, BoxState::WALL }
    }
};


Environment::Environment()
{
    // initialization of the board
    int indexBoard = rand() % NB_BOARDS;
    qDebug ("INDEX ::::: %d", indexBoard);
    for (int y = 0; y < BOARD_Y; y++) {
        for (int x = 0; x < BOARD_X; x++) {
               this->board[y][x] = BOARDS [indexBoard][y][x];

        }
    }
}
string Environment::toString() {
    ostringstream ss;

    for (int y = 0; y < BOARD_Y; y++) {
        for (int x = 0; x < BOARD_X; x++) {
            ss << " " << ((int)this->board[y][x]);
        }
        ss << endl;
    }

    return ss.str();
}
