#include "Sniper.hpp"

#undef INITIAL_HEALTH
#define INITIAL_HEALTH 120

#undef DAMAGE_PER_ACTIVITY
#define DAMAGE_PER_ACTIVITY 100

namespace WarGame {
    class SniperCommander : public Sniper {
        public:
        SniperCommander(int player) : Sniper(DAMAGE, INITIAL_HEALTH, DAMAGE_PER_ACTIVITY, player) {}

        ~SniperCommander() {}
    };
};