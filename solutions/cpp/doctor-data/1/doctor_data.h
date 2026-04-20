#pragma once
#include <string>

namespace star_map {
    enum System {
        Sol,
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel{
        public:
            Vessel(std::string vessel_name, int gen) {
                name = vessel_name;
                generation = gen;
            }
            Vessel(std::string vessel_name, int gen, star_map::System system) {
                name = vessel_name;
                generation = gen;
                current_system = system;
            }
            std::string name{};
            int generation{};
            star_map::System current_system{};
            int busters{0};
            
            Vessel replicate(std::string replicant_name) {
                return Vessel(replicant_name, generation + 1);
            }

            void make_buster() {
                busters++;
            }

            bool shoot_buster() {
                if (busters > 0) {
                    busters--;
                    return true;
                } else {
                    return false;
                }
            }
    };

    bool in_the_same_system(Vessel bob1, Vessel bob2);
    std::string get_older_bob(Vessel bob1, Vessel bob2);
}
