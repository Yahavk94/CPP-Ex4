#pragma once

#include "Soldier.hpp"

#define INITIAL_HEALTH 100
#define DAMAGE_PER_ACTIVITY 10

namespace WarGame {
    class FootSoldier : public Soldier {
        public:
        // For commander
        FootSoldier(int activity, int health, int damage_heal, int player) : Soldier(DAMAGE, INITIAL_HEALTH, DAMAGE_PER_ACTIVITY, player) {}

        // For soldier
        FootSoldier(int player) : Soldier(DAMAGE, INITIAL_HEALTH, DAMAGE_PER_ACTIVITY, player) {}

        ~FootSoldier() {}
    };
};