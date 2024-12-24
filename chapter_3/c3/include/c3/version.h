#pragma once

#define C3_VERSION_MAJOR 1
#define C3_VERSION_MINOR 0
#define C3_VERSION_PATCH 0

#define C3_TO_VERSION(major, minor, patch) (major * 10000 + minor * 100 + patch)
#define C3_VERSION                         C3_TO_VERSION(C3_VERSION_MAJOR, C3_VERSION_MINOR, C3_VERSION_PATCH)

#define C3_STRINGIFY_MACRO(x) #x
#define C3_STRINGIFY(x)       C3_STRINGIFY_MACRO(x)

// clang-format off
#define C3_VERSION_STRING                                                                                        \
    C3_STRINGIFY(C3_VERSION_MAJOR)                                                                               \
    "."                                                                                                          \
    C3_STRINGIFY(C3_VERSION_MINOR)                                                                               \
    "."                                                                                                          \
    C3_STRINGIFY(C3_VERSION_PATCH)
// clang-format on
