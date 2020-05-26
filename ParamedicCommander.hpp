#include "Paramedic.hpp"

#undef INITIAL_HEALTH
#define INITIAL_HEALTH 200

namespace WarGame {
    class ParamedicCommander : public Paramedic {
        public:
        ParamedicCommander(int player) : Paramedic(DAMAGE, INITIAL_HEALTH, DAMAGE_PER_ACTIVITY, player) {}

        ~ParamedicCommander() {}
    };
};