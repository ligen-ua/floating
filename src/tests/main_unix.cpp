#include "tests.hpp"
#include "libFloatingTests.hpp"

int main()
{
    tests();
    return lff::AllSucceeded? 0 : EXIT_FAILURE;
}