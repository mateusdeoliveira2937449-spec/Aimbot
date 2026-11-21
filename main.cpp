#include "AimSystem.h"
#include <iostream>
#include <vector>

int main() {
    AimConfig config;

    config.fov = 120.0f;
    config.maxDistance = 200.0f;

    std::vector<Target> targets = {
        {30.0f, 20.0f, 50.0f, true},
        {80.0f, 40.0f, 100.0f, true},
        {10.0f, 15.0f, 30.0f, true},
        {50.0f, 50.0f, 250.0f, true}
    };

    int selected = SelectHeadTarget(targets, config);

    if (selected >= 0) {
        std::cout << "Alvo selecionado: "
                  << selected << std::endl;
    } else {
        std::cout << "Nenhum alvo encontrado."
                  << std::endl;
    }

    return 0;
}
