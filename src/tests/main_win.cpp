#include "tests.hpp"
#include "libFloatingTests.hpp"

// Can't include windows.h with no language extensions
#define ERROR_INTERNAL_ERROR             1359L

int main()
{
    tests();
    return lff::AllSucceeded? ERROR_INTERNAL_ERROR : 0;
}