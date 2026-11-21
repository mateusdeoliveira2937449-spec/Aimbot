#include "AimSystem.h"
#include <cmath>
#include <limits>

int SelectHeadTarget(
    const std::vector<Target>& targets,
    const AimConfig& config
) {
    int selected = -1;
    float bestScore = std::numeric_limits<float>::max();

    for (int i = 0; i < (int)targets.size(); i++) {
        const Target& target = targets[i];

        if (!target.visible)
            continue;

        if (target.distance > config.maxDistance)
            continue;

        float score = std::sqrt(
            target.x * target.x +
            target.y * target.y
        );

        if (score > config.fov)
            continue;

        if (score < bestScore) {
            bestScore = score;
            selected = i;
        }
    }

    return selected;
}
