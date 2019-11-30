#pragma once

#include <chrono>

static auto time_now() -> std::chrono::high_resolution_clock::time_point {
    return std::chrono::high_resolution_clock::now();
}

static auto time_elapsed(const std::chrono::high_resolution_clock::time_point & start) -> float {
    return std::chrono::duration_cast< std::chrono::duration<float> >(time_now() - start).count();
}
