#pragma once


#include "Soldier.hpp"

#define INITIAL_HEALTH 100
#define DAMAGE_PER_ACTIVITY 50

namespace WarGame {
    class Sniper : public Soldier {
        public:
        // For commander
        Sniper(int activity, int health, int damage_heal, int player) : Soldier(DAMAGE, INITIAL_HEALTH, DAMAGE_PER_ACTIVITY, player) {}

        // For soldier
        Sniper(int player) : Soldier(DAMAGE, INITIAL_HEALTH, DAMAGE_PER_ACTIVITY, player) {}

        ~Sniper() {}
    };
};