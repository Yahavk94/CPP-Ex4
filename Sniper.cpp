#include "Sniper.hpp"

namespace WarGame {
    Sniper::Sniper(int team) : Soldier(team, SNIPER, false, /* HP */ 100, /* Damage */ 50) {
        this->setMaxHP(100);
    }

    Sniper::~Sniper() { /* Sniper deconstructor */ }

    void Sniper::activate(std::vector<std::vector<Soldier*>>& board, std::pair<int,int> location) {
        int max = 0;
        std::pair<int,int> target /* Copy constructor */ (location);

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == nullptr) {
                    continue;
                }

                if (board[i][j]->team != this->team) {
                    if (board[i][j]->HP > max) /* Find the opponent with the greatest HP */ {
                        max = board[i][j]->HP;
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