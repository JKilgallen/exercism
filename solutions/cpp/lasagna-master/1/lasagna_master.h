#pragma once

#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(std::vector<std::string> layers, int avg_prep_time=2);

amount quantities(std::vector<std::string> layers);

void addSecretIngredient(std::vector<std::string>& myIngredients, const std::vector<std::string>& friendIngredients);

std::vector<double> scaleRecipe(std::vector<double> ratios, int portions);

void addSecretIngredient(std::vector<std::string>& myIngredients, std::string secretIngredient);

}  // namespace lasagna_master
