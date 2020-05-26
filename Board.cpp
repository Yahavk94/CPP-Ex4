#include "Board.hpp"
#include "FootCommander.hpp"
#include "SniperCommander.hpp"

#include <stdexcept>

namespace WarGame {
    Soldier*& Board::operator[] (std::pair<int, int> location) {
        if (location.first >= Board::board.size()) throw new std::runtime_error("Exception");
        if (location.second >= Board::board[0].size()) throw new std::runtime_error("Exception");

        return Board::board[location.first][location.second];
    }

    Soldier* Board::operator[] (std::pair<int,int> location) const {
        if (location.first >= Board::board.size()) throw new std::runtime_error("Exception");
        if (location.second >= Board::board[0].size()) throw new std::runtime_error("Exception");

        return Board::board[location.first][location.second];
    }
};