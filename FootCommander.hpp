#include "FootSoldier.hpp"

#undef INITIAL_HEALTH
#define INITIAL_HEALTH 150

#undef DAMAGE_PER_ACTIVITY
#define DAMAGE_PER_ACTIVITY 20

namespace WarGame {
    class FootCommander : public FootSoldier {
        public:
            FootCommander(int player) : FootSoldier(DAMAGE, INITIAL_HEALTH, DAMAGE_PER_ACTIVITY, player) {}

            ~FootCommander() {}
    };
};