#pragma once

#include <vector>

struct Target {
    float x;
    float y;
    float distance;
    bool visible;
};

struct AimConfig {
    float fov = 120.0f;
    float maxDistance = 200.0f;
};

int SelectHeadTarget(
    const std::vector<Target>& targets,
    const AimConfig& config
);
