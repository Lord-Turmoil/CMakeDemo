#include "c3/header.h"
#include "c3/version.h"

#include <div/div.h>
#include <mul/mul.h>

#include <iostream>

int calc(int a, int b, int (*f)(int, int))
{
    return f(a, b);
}

int main()
{
    int a = 66;
    int b = 11;

    std::cout << "Version: " << C3_VERSION_STRING << std::endl;

    std::cout << "a / b = " << calc(a, b, lib_div::divide) << std::endl;
    std::cout << "a * b = " << calc(a, b, lib_mul::multiply) << std::endl;

    C3_ASSERT(a == b);

    return 0;
}
