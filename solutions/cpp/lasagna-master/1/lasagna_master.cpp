#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
int preparationTime(std::vector<std::string> layers, int avg_prep_time) {
    return layers.size() * avg_prep_time;
}

amount quantities(std::vector<std::string> layers) {
    amount out = {0, 0};
    for (std::string l : layers) {
        if (l == "noodles") {
            out.noodles += 50;            
        } else if (l == "sauce") {
            out.sauce += 0.2;
        }
    }
    return out;
}

void addSecretIngredient(std::vector<std::string>& myIngredients, const std::vector<std::string>& friendIngredients) {
    myIngredients.back() = friendIngredients.back();
}

std::vector<double> scaleRecipe(std::vector<double> ratios, int portions) {
    std::vector<double> out{};
    for (double i : ratios) {
        out.push_back(i/2 * portions);
    }
    return out;
}

void addSecretIngredient(std::vector<std::string>& myIngredients, std::string secretIngredient) {
    myIngredients.back() = secretIngredient;
}

}  // namespace lasagna_master
