#pragma once

int calc(int a, int b, int (*f)(int, int));

#ifdef C3_ENABLE_ASSERT
#include <cassert>
#define C3_ASSERT(x) assert(x)
#else
#define C3_ASSERT(x)
#endif