#pragma once


#include "Soldier.hpp"

#define INITIAL_HEALTH 100
#define HEAL_PER_ACTIVITY 200

namespace WarGame {
    class Paramedic : public Soldier {
        // For commander
        Paramedic(int activity, int health, int damage_heal, int player) {
            this = new Soldier(HEAL, INITIAL_HEALTH, HEAL_PER_ACTIVITY, player);
        }

        // For soldier
        Paramedic(int player) {
            this = new Soldier(HEAL, INITIAL_HEALTH, HEAL_PER_ACTIVITY, player);
        }

        ~Paramedic() {}
    };
};