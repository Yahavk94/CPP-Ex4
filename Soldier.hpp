#pragma once

#include <iostream>

#define DAMAGE 0
#define HEALTH 1


namespace WarGame {
    class Soldier {
    private:
        //static int counter = 1;
        int serialNumber;
        int activity; // damage / heal
        int health;
        int damage_heal; // 0 = damage, 1 = heal
        int player;

    public:
        Soldier() {}
        /**
         * A constructor.
         */
        Soldier(int activity, int health, int damage_heal, int player) {
            this->serialNumber = 1 /*counter++*/ ;
            this->activity = activity;
            this->health = health;
            this->damage_heal = damage_heal;
            this->player = player;
        }

        /**
         * A destructor.
         */
        virtual ~Soldier() {}

        int getSerialNumber() const {
            return this->serialNumber;
        }

        int getActivity() const {
            return this->activity;
        }

        int getHealth() const {
            return this->health;
        }

        void setHealth(int health) {
            this->health = health;
        }

        int getDamage_Heal() const {
            return this->damage_heal;
        }
    };
};