#include "FootSoldier.hpp"

namespace WarGame {
    FootSoldier::FootSoldier(int team) : Soldier(team, FOOT, false, /* HP */ 100, /* Damage */ 10) {
        this->setMaxHP(100);
    }

    FootSoldier::~FootSoldier() { /* FootSoldier deconstructor */ }

    void FootSoldier::activate(std::vector<std::vector<Soldier*>>& board, std::pair<int,int> location) {
        int min = 2147483647;
        std::pair<int,int> target /* Copy constructor */ (location);

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == nullptr) {
                    continue;
                }

                if (board[i][j]->team != this->team) {
                    if (std::abs(location.first - i) + std::abs(location.second - j) < min) {
                        min = std::abs(location.first - i) + std::abs(location.second - j);
                        target = {i,j};
                    }
                }
            }
        }
        
        board[target.first][target.second]->HP -= this->damage;
        if (board[target.first][target.second]->HP <= 0) /* This soldier has reached 0 HP */ {
            board[target.first][target.second] = nullptr;
        }
    }
};