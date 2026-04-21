#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& person, std::string new_artifact) {
        person.possession = std::make_unique<artifact>(new_artifact);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& artifact1, std::unique_ptr<artifact>& artifact2) {
        auto temp = std::move(artifact1);
        artifact1 = std::move(artifact2);
        artifact2 = std::move(temp);
    }

    void manifest_power(human& person, std::string new_power) {
        person.own_power = std::make_shared<power>(new_power);
    }

    void use_power(human& caster, human& target) {
        target.influenced_by = caster.own_power;
    }

    int power_intensity(human& caster) {
        if (!caster.own_power) {
            return 0;
        }
        return caster.own_power.use_count();
    }
}  // namespace troy
