#pragma once

// -- libFloating --
// How to use:
// 1. Generate double in runtime:
//     lff::Double<1234, -2>::GetDouble() --- > returns 12.34
// 2. Acquire the integral value at compile time:
//     lff::Double<1234, -2>::IntegralValue --- > returns the same binary

namespace lff
{
const long long g_maxNumberOfBits =52;

// database (see lffGen.cpp/g_pSourceTable)
template <long long X, long long Y>
struct FloatingCell
{
    const static long long value = 0;
};
#define FCELL(X,Y, Value) \
    template <> \
    struct FloatingCell<X,Y>\
    {\
        const static long long value = Value;\
    }; 


FCELL( 0, 0, 5)
FCELL( 1, 0, 2)
FCELL( 1, 1, 5)
FCELL( 2, 0, 1)
FCELL( 2, 1, 2)
FCELL( 2, 2, 5)
FCELL( 3, 1, 6)
FCELL( 3, 2, 2)
FCELL( 3, 3, 5)
FCELL( 4, 1, 3)
FCELL( 4, 2, 1)
FCELL( 4, 3, 2)
FCELL( 4, 4, 5)
FCELL( 5, 1, 1)
FCELL( 5, 2, 5)
FCELL( 5, 3, 6)
FCELL( 5, 4, 2)
FCELL( 5, 5, 5)
FCELL( 6, 2, 7)
FCELL( 6, 3, 8)
FCELL( 6, 4, 1)
FCELL( 6, 5, 2)
FCELL( 6, 6, 5)
FCELL( 7, 2, 3)
FCELL( 7, 3, 9)
FCELL( 7, 5, 6)
FCELL( 7, 6, 2)
FCELL( 7, 7, 5)
FCELL( 8, 2, 1)
FCELL( 8, 3, 9)
FCELL( 8, 4, 5)
FCELL( 8, 5, 3)
FCELL( 8, 6, 1)
FCELL( 8, 7, 2)
FCELL( 8, 8, 5)
FCELL( 9, 3, 9)
FCELL( 9, 4, 7)
FCELL( 9, 5, 6)
FCELL( 9, 6, 5)
FCELL( 9, 7, 6)
FCELL( 9, 8, 2)
FCELL( 9, 9, 5)
FCELL( 10, 3, 4)
FCELL( 10, 4, 8)
FCELL( 10, 5, 8)
FCELL( 10, 6, 2)
FCELL( 10, 7, 8)
FCELL( 10, 8, 1)
FCELL( 10, 9, 2)
FCELL( 10, 10, 5)
FCELL( 11, 3, 2)
FCELL( 11, 4, 4)
FCELL( 11, 5, 4)
FCELL( 11, 6, 1)
FCELL( 11, 7, 4)
FCELL( 11, 9, 6)
FCELL( 11, 10, 2)
FCELL( 11, 11, 5)
FCELL( 12, 3, 1)
FCELL( 12, 4, 2)
FCELL( 12, 5, 2)
FCELL( 12, 7, 7)
FCELL( 12, 9, 3)
FCELL( 12, 10, 1)
FCELL( 12, 11, 2)
FCELL( 12, 12, 5)
FCELL( 13, 4, 6)
FCELL( 13, 5, 1)
FCELL( 13, 7, 3)
FCELL( 13, 8, 5)
FCELL( 13, 9, 1)
FCELL( 13, 10, 5)
FCELL( 13, 11, 6)
FCELL( 13, 12, 2)
FCELL( 13, 13, 5)
FCELL( 14, 4, 3)
FCELL( 14, 6, 5)
FCELL( 14, 7, 1)
FCELL( 14, 8, 7)
FCELL( 14, 9, 5)
FCELL( 14, 10, 7)
FCELL( 14, 11, 8)
FCELL( 14, 12, 1)
FCELL( 14, 13, 2)
FCELL( 14, 14, 5)
FCELL( 15, 4, 1)
FCELL( 15, 5, 5)
FCELL( 15, 6, 2)
FCELL( 15, 7, 5)
FCELL( 15, 8, 8)
FCELL( 15, 9, 7)
FCELL( 15, 10, 8)
FCELL( 15, 11, 9)
FCELL( 15, 13, 6)
FCELL( 15, 14, 2)
FCELL( 15, 15, 5)
FCELL( 16, 5, 7)
FCELL( 16, 6, 6)
FCELL( 16, 7, 2)
FCELL( 16, 8, 9)
FCELL( 16, 9, 3)
FCELL( 16, 10, 9)
FCELL( 16, 11, 4)
FCELL( 16, 12, 5)
FCELL( 16, 13, 3)
FCELL( 16, 14, 1)
FCELL( 16, 15, 2)
FCELL( 16, 16, 5)
FCELL( 17, 5, 3)
FCELL( 17, 6, 8)
FCELL( 17, 7, 1)
FCELL( 17, 8, 4)
FCELL( 17, 9, 6)
FCELL( 17, 10, 9)
FCELL( 17, 11, 7)
FCELL( 17, 12, 2)
FCELL( 17, 13, 6)
FCELL( 17, 14, 5)
FCELL( 17, 15, 6)
FCELL( 17, 16, 2)
FCELL( 17, 17, 5)
FCELL( 18, 5, 1)
FCELL( 18, 6, 9)
FCELL( 18, 8, 7)
FCELL( 18, 9, 3)
FCELL( 18, 10, 4)
FCELL( 18, 11, 8)
FCELL( 18, 12, 6)
FCELL( 18, 13, 3)
FCELL( 18, 14, 2)
FCELL( 18, 15, 8)
FCELL( 18, 16, 1)
FCELL( 18, 17, 2)
FCELL( 18, 18, 5)
FCELL( 19, 6, 9)
FCELL( 19, 7, 5)
FCELL( 19, 8, 3)
FCELL( 19, 9, 6)
FCELL( 19, 10, 7)
FCELL( 19, 11, 4)
FCELL( 19, 12, 3)
FCELL( 19, 13, 1)
FCELL( 19, 14, 6)
FCELL( 19, 15, 4)
FCELL( 19, 17, 6)
FCELL( 19, 18, 2)
FCELL( 19, 19, 5)
FCELL( 20, 6, 4)
FCELL( 20, 7, 7)
FCELL( 20, 8, 6)
FCELL( 20, 9, 8)
FCELL( 20, 10, 3)
FCELL( 20, 11, 7)
FCELL( 20, 12, 1)
FCELL( 20, 13, 5)
FCELL( 20, 14, 8)
FCELL( 20, 15, 2)
FCELL( 20, 17, 3)
FCELL( 20, 18, 1)
FCELL( 20, 19, 2)
FCELL( 20, 20, 5)
FCELL( 21, 6, 2)
FCELL( 21, 7, 3)
FCELL( 21, 8, 8)
FCELL( 21, 9, 4)
FCELL( 21, 10, 1)
FCELL( 21, 11, 8)
FCELL( 21, 12, 5)
FCELL( 21, 13, 7)
FCELL( 21, 14, 9)
FCELL( 21, 15, 1)
FCELL( 21, 17, 1)
FCELL( 21, 18, 5)
FCELL( 21, 19, 6)
FCELL( 21, 20, 2)
FCELL( 21, 21, 5)
FCELL( 22, 6, 1)
FCELL( 22, 7, 1)
FCELL( 22, 8, 9)
FCELL( 22, 9, 2)
FCELL( 22, 11, 9)
FCELL( 22, 12, 2)
FCELL( 22, 13, 8)
FCELL( 22, 14, 9)
FCELL( 22, 15, 5)
FCELL( 22, 16, 5)
FCELL( 22, 18, 7)
FCELL( 22, 19, 8)
FCELL( 22, 20, 1)
FCELL( 22, 21, 2)
FCELL( 22, 22, 5)
FCELL( 23, 7, 5)
FCELL( 23, 8, 9)
FCELL( 23, 9, 6)
FCELL( 23, 11, 4)
FCELL( 23, 12, 6)
FCELL( 23, 13, 4)
FCELL( 23, 14, 4)
FCELL( 23, 15, 7)
FCELL( 23, 16, 7)
FCELL( 23, 17, 5)
FCELL( 23, 18, 3)
FCELL( 23, 19, 9)
FCELL( 23, 21, 6)
FCELL( 23, 22, 2)
FCELL( 23, 23, 5)
FCELL( 24, 7, 2)
FCELL( 24, 8, 9)
FCELL( 24, 9, 8)
FCELL( 24, 11, 2)
FCELL( 24, 12, 3)
FCELL( 24, 13, 2)
FCELL( 24, 14, 2)
FCELL( 24, 15, 3)
FCELL( 24, 16, 8)
FCELL( 24, 17, 7)
FCELL( 24, 18, 6)
FCELL( 24, 19, 9)
FCELL( 24, 20, 5)
FCELL( 24, 21, 3)
FCELL( 24, 22, 1)
FCELL( 24, 23, 2)
FCELL( 24, 24, 5)
FCELL( 25, 7, 1)
FCELL( 25, 8, 4)
FCELL( 25, 9, 9)
FCELL( 25, 11, 1)
FCELL( 25, 12, 1)
FCELL( 25, 13, 6)
FCELL( 25, 14, 1)
FCELL( 25, 15, 1)
FCELL( 25, 16, 9)
FCELL( 25, 17, 3)
FCELL( 25, 18, 8)
FCELL( 25, 19, 4)
FCELL( 25, 20, 7)
FCELL( 25, 21, 6)
FCELL( 25, 22, 5)
FCELL( 25, 23, 6)
FCELL( 25, 24, 2)
FCELL( 25, 25, 5)
FCELL( 26, 8, 7)
FCELL( 26, 9, 4)
FCELL( 26, 10, 5)
FCELL( 26, 12, 5)
FCELL( 26, 13, 8)
FCELL( 26, 15, 5)
FCELL( 26, 16, 9)
FCELL( 26, 17, 6)
FCELL( 26, 18, 9)
FCELL( 26, 19, 2)
FCELL( 26, 20, 3)
FCELL( 26, 21, 8)
FCELL( 26, 22, 2)
FCELL( 26, 23, 8)
FCELL( 26, 24, 1)
FCELL( 26, 25, 2)
FCELL( 26, 26, 5)
FCELL( 27, 8, 3)
FCELL( 27, 9, 7)
FCELL( 27, 10, 2)
FCELL( 27, 11, 5)
FCELL( 27, 12, 2)
FCELL( 27, 13, 9)
FCELL( 27, 15, 2)
FCELL( 27, 16, 9)
FCELL( 27, 17, 8)
FCELL( 27, 18, 4)
FCELL( 27, 19, 6)
FCELL( 27, 20, 1)
FCELL( 27, 21, 9)
FCELL( 27, 22, 1)
FCELL( 27, 23, 4)
FCELL( 27, 25, 6)
FCELL( 27, 26, 2)
FCELL( 27, 27, 5)
FCELL( 28, 8, 1)
FCELL( 28, 9, 8)
FCELL( 28, 10, 6)
FCELL( 28, 11, 2)
FCELL( 28, 12, 6)
FCELL( 28, 13, 4)
FCELL( 28, 14, 5)
FCELL( 28, 15, 1)
FCELL( 28, 16, 4)
FCELL( 28, 17, 9)
FCELL( 28, 18, 2)
FCELL( 28, 19, 3)
FCELL( 28, 21, 9)
FCELL( 28, 22, 5)
FCELL( 28, 23, 7)
FCELL( 28, 25, 3)
FCELL( 28, 26, 1)
FCELL( 28, 27, 2)
FCELL( 28, 28, 5)
FCELL( 29, 9, 9)
FCELL( 29, 10, 3)
FCELL( 29, 11, 1)
FCELL( 29, 12, 3)
FCELL( 29, 13, 2)
FCELL( 29, 14, 2)
FCELL( 29, 15, 5)
FCELL( 29, 16, 7)
FCELL( 29, 17, 4)
FCELL( 29, 18, 6)
FCELL( 29, 19, 1)
FCELL( 29, 20, 5)
FCELL( 29, 21, 4)
FCELL( 29, 22, 7)
FCELL( 29, 23, 8)
FCELL( 29, 24, 5)
FCELL( 29, 25, 1)
FCELL( 29, 26, 5)
FCELL( 29, 27, 6)
FCELL( 29, 28, 2)
FCELL( 29, 29, 5)
FCELL( 30, 9, 4)
FCELL( 30, 10, 6)
FCELL( 30, 11, 5)
FCELL( 30, 12, 6)
FCELL( 30, 13, 6)
FCELL( 30, 14, 1)
FCELL( 30, 15, 2)
FCELL( 30, 16, 8)
FCELL( 30, 17, 7)
FCELL( 30, 18, 3)
FCELL( 30, 20, 7)
FCELL( 30, 21, 7)
FCELL( 30, 22, 3)
FCELL( 30, 23, 9)
FCELL( 30, 24, 2)
FCELL( 30, 25, 5)
FCELL( 30, 26, 7)
FCELL( 30, 27, 8)
FCELL( 30, 28, 1)
FCELL( 30, 29, 2)
FCELL( 30, 30, 5)
FCELL( 31, 9, 2)
FCELL( 31, 10, 3)
FCELL( 31, 11, 2)
FCELL( 31, 12, 8)
FCELL( 31, 13, 3)
FCELL( 31, 15, 6)
FCELL( 31, 16, 4)
FCELL( 31, 17, 3)
FCELL( 31, 18, 6)
FCELL( 31, 19, 5)
FCELL( 31, 20, 3)
FCELL( 31, 21, 8)
FCELL( 31, 22, 6)
FCELL( 31, 23, 9)
FCELL( 31, 24, 6)
FCELL( 31, 25, 2)
FCELL( 31, 26, 8)
FCELL( 31, 27, 9)
FCELL( 31, 29, 6)
FCELL( 31, 30, 2)
FCELL( 31, 31, 5)
FCELL( 32, 9, 1)
FCELL( 32, 10, 1)
FCELL( 32, 11, 6)
FCELL( 32, 12, 4)
FCELL( 32, 13, 1)
FCELL( 32, 14, 5)
FCELL( 32, 15, 3)
FCELL( 32, 16, 2)
FCELL( 32, 17, 1)
FCELL( 32, 18, 8)
FCELL( 32, 19, 2)
FCELL( 32, 20, 6)
FCELL( 32, 21, 9)
FCELL( 32, 22, 3)
FCELL( 32, 23, 4)
FCELL( 32, 24, 8)
FCELL( 32, 25, 1)
FCELL( 32, 26, 4)
FCELL( 32, 27, 4)
FCELL( 32, 28, 5)
FCELL( 32, 29, 3)
FCELL( 32, 30, 1)
FCELL( 32, 31, 2)
FCELL( 32, 32, 5)
FCELL( 33, 10, 5)
FCELL( 33, 11, 8)
FCELL( 33, 12, 2)
FCELL( 33, 14, 7)
FCELL( 33, 15, 6)
FCELL( 33, 16, 6)
FCELL( 33, 18, 9)
FCELL( 33, 19, 1)
FCELL( 33, 20, 3)
FCELL( 33, 21, 4)
FCELL( 33, 22, 6)
FCELL( 33, 23, 7)
FCELL( 33, 24, 4)
FCELL( 33, 26, 7)
FCELL( 33, 27, 2)
FCELL( 33, 28, 2)
FCELL( 33, 29, 6)
FCELL( 33, 30, 5)
FCELL( 33, 31, 6)
FCELL( 33, 32, 2)
FCELL( 33, 33, 5)
FCELL( 34, 10, 2)
FCELL( 34, 11, 9)
FCELL( 34, 12, 1)
FCELL( 34, 14, 3)
FCELL( 34, 15, 8)
FCELL( 34, 16, 3)
FCELL( 34, 18, 4)
FCELL( 34, 19, 5)
FCELL( 34, 20, 6)
FCELL( 34, 21, 7)
FCELL( 34, 22, 3)
FCELL( 34, 23, 3)
FCELL( 34, 24, 7)
FCELL( 34, 26, 3)
FCELL( 34, 27, 6)
FCELL( 34, 28, 1)
FCELL( 34, 29, 3)
FCELL( 34, 30, 2)
FCELL( 34, 31, 8)
FCELL( 34, 32, 1)
FCELL( 34, 33, 2)
FCELL( 34, 34, 5)
FCELL( 35, 10, 1)
FCELL( 35, 11, 4)
FCELL( 35, 12, 5)
FCELL( 35, 13, 5)
FCELL( 35, 14, 1)
FCELL( 35, 15, 9)
FCELL( 35, 16, 1)
FCELL( 35, 17, 5)
FCELL( 35, 18, 2)
FCELL( 35, 19, 2)
FCELL( 35, 20, 8)
FCELL( 35, 21, 3)
FCELL( 35, 22, 6)
FCELL( 35, 23, 6)
FCELL( 35, 24, 8)
FCELL( 35, 25, 5)
FCELL( 35, 26, 1)
FCELL( 35, 27, 8)
FCELL( 35, 29, 6)
FCELL( 35, 30, 6)
FCELL( 35, 31, 4)
FCELL( 35, 33, 6)
FCELL( 35, 34, 2)
FCELL( 35, 35, 5)
FCELL( 36, 11, 7)
FCELL( 36, 12, 2)
FCELL( 36, 13, 7)
FCELL( 36, 14, 5)
FCELL( 36, 15, 9)
FCELL( 36, 16, 5)
FCELL( 36, 17, 7)
FCELL( 36, 18, 6)
FCELL( 36, 19, 1)
FCELL( 36, 20, 4)
FCELL( 36, 21, 1)
FCELL( 36, 22, 8)
FCELL( 36, 23, 3)
FCELL( 36, 24, 4)
FCELL( 36, 25, 2)
FCELL( 36, 26, 5)
FCELL( 36, 27, 9)
FCELL( 36, 29, 3)
FCELL( 36, 30, 3)
FCELL( 36, 31, 2)
FCELL( 36, 33, 3)
FCELL( 36, 34, 1)
FCELL( 36, 35, 2)
FCELL( 36, 36, 5)
FCELL( 37, 11, 3)
FCELL( 37, 12, 6)
FCELL( 37, 13, 3)
FCELL( 37, 14, 7)
FCELL( 37, 15, 9)
FCELL( 37, 16, 7)
FCELL( 37, 17, 8)
FCELL( 37, 18, 8)
FCELL( 37, 20, 7)
FCELL( 37, 22, 9)
FCELL( 37, 23, 1)
FCELL( 37, 24, 7)
FCELL( 37, 25, 1)
FCELL( 37, 26, 2)
FCELL( 37, 27, 9)
FCELL( 37, 28, 5)
FCELL( 37, 29, 1)
FCELL( 37, 30, 6)
FCELL( 37, 31, 6)
FCELL( 37, 33, 1)
FCELL( 37, 34, 5)
FCELL( 37, 35, 6)
FCELL( 37, 36, 2)
FCELL( 37, 37, 5)
FCELL( 38, 11, 1)
FCELL( 38, 12, 8)
FCELL( 38, 13, 1)
FCELL( 38, 14, 8)
FCELL( 38, 15, 9)
FCELL( 38, 16, 8)
FCELL( 38, 17, 9)
FCELL( 38, 18, 4)
FCELL( 38, 20, 3)
FCELL( 38, 21, 5)
FCELL( 38, 22, 4)
FCELL( 38, 23, 5)
FCELL( 38, 24, 8)
FCELL( 38, 25, 5)
FCELL( 38, 26, 6)
FCELL( 38, 27, 4)
FCELL( 38, 28, 7)
FCELL( 38, 29, 5)
FCELL( 38, 30, 8)
FCELL( 38, 31, 3)
FCELL( 38, 34, 7)
FCELL( 38, 35, 8)
FCELL( 38, 36, 1)
FCELL( 38, 37, 2)
FCELL( 38, 38, 5)
FCELL( 39, 12, 9)
FCELL( 39, 14, 9)
FCELL( 39, 15, 4)
FCELL( 39, 16, 9)
FCELL( 39, 17, 4)
FCELL( 39, 18, 7)
FCELL( 39, 20, 1)
FCELL( 39, 21, 7)
FCELL( 39, 22, 7)
FCELL( 39, 23, 2)
FCELL( 39, 24, 9)
FCELL( 39, 25, 2)
FCELL( 39, 26, 8)
FCELL( 39, 27, 2)
FCELL( 39, 28, 3)
FCELL( 39, 29, 7)
FCELL( 39, 30, 9)
FCELL( 39, 31, 1)
FCELL( 39, 32, 5)
FCELL( 39, 34, 3)
FCELL( 39, 35, 9)
FCELL( 39, 37, 6)
FCELL( 39, 38, 2)
FCELL( 39, 39, 5)
FCELL( 40, 12, 4)
FCELL( 40, 13, 5)
FCELL( 40, 14, 4)
FCELL( 40, 15, 7)
FCELL( 40, 16, 4)
FCELL( 40, 17, 7)
FCELL( 40, 18, 3)
FCELL( 40, 19, 5)
FCELL( 40, 21, 8)
FCELL( 40, 22, 8)
FCELL( 40, 23, 6)
FCELL( 40, 24, 4)
FCELL( 40, 25, 6)
FCELL( 40, 26, 4)
FCELL( 40, 27, 1)
FCELL( 40, 28, 1)
FCELL( 40, 29, 8)
FCELL( 40, 30, 9)
FCELL( 40, 31, 5)
FCELL( 40, 32, 7)
FCELL( 40, 33, 5)
FCELL( 40, 34, 1)
FCELL( 40, 35, 9)
FCELL( 40, 36, 5)
FCELL( 40, 37, 3)
FCELL( 40, 38, 1)
FCELL( 40, 39, 2)
FCELL( 40, 40, 5)
FCELL( 41, 12, 2)
FCELL( 41, 13, 2)
FCELL( 41, 14, 7)
FCELL( 41, 15, 3)
FCELL( 41, 16, 7)
FCELL( 41, 17, 3)
FCELL( 41, 18, 6)
FCELL( 41, 19, 7)
FCELL( 41, 20, 5)
FCELL( 41, 21, 4)
FCELL( 41, 22, 4)
FCELL( 41, 23, 3)
FCELL( 41, 24, 2)
FCELL( 41, 25, 3)
FCELL( 41, 26, 2)
FCELL( 41, 28, 5)
FCELL( 41, 29, 9)
FCELL( 41, 30, 4)
FCELL( 41, 31, 7)
FCELL( 41, 32, 8)
FCELL( 41, 33, 7)
FCELL( 41, 34, 5)
FCELL( 41, 35, 9)
FCELL( 41, 36, 7)
FCELL( 41, 37, 6)
FCELL( 41, 38, 5)
FCELL( 41, 39, 6)
FCELL( 41, 40, 2)
FCELL( 41, 41, 5)
FCELL( 42, 12, 1)
FCELL( 42, 13, 1)
FCELL( 42, 14, 3)
FCELL( 42, 15, 6)
FCELL( 42, 16, 8)
FCELL( 42, 17, 6)
FCELL( 42, 18, 8)
FCELL( 42, 19, 3)
FCELL( 42, 20, 7)
FCELL( 42, 21, 7)
FCELL( 42, 22, 2)
FCELL( 42, 23, 1)
FCELL( 42, 24, 6)
FCELL( 42, 25, 1)
FCELL( 42, 26, 6)
FCELL( 42, 28, 2)
FCELL( 42, 29, 9)
FCELL( 42, 30, 7)
FCELL( 42, 31, 3)
FCELL( 42, 32, 9)
FCELL( 42, 33, 3)
FCELL( 42, 34, 7)
FCELL( 42, 35, 9)
FCELL( 42, 36, 8)
FCELL( 42, 37, 8)
FCELL( 42, 38, 2)
FCELL( 42, 39, 8)
FCELL( 42, 40, 1)
FCELL( 42, 41, 2)
FCELL( 42, 42, 5)
FCELL( 43, 13, 5)
FCELL( 43, 14, 6)
FCELL( 43, 15, 8)
FCELL( 43, 16, 4)
FCELL( 43, 17, 3)
FCELL( 43, 18, 4)
FCELL( 43, 19, 1)
FCELL( 43, 20, 8)
FCELL( 43, 21, 8)
FCELL( 43, 22, 6)
FCELL( 43, 24, 8)
FCELL( 43, 26, 8)
FCELL( 43, 28, 1)
FCELL( 43, 29, 4)
FCELL( 43, 30, 8)
FCELL( 43, 31, 6)
FCELL( 43, 32, 9)
FCELL( 43, 33, 6)
FCELL( 43, 34, 8)
FCELL( 43, 35, 9)
FCELL( 43, 36, 9)
FCELL( 43, 37, 4)
FCELL( 43, 38, 1)
FCELL( 43, 39, 4)
FCELL( 43, 41, 6)
FCELL( 43, 42, 2)
FCELL( 43, 43, 5)
FCELL( 44, 13, 2)
FCELL( 44, 14, 8)
FCELL( 44, 15, 4)
FCELL( 44, 16, 2)
FCELL( 44, 17, 1)
FCELL( 44, 18, 7)
FCELL( 44, 20, 9)
FCELL( 44, 21, 4)
FCELL( 44, 22, 3)
FCELL( 44, 24, 4)
FCELL( 44, 26, 4)
FCELL( 44, 29, 7)
FCELL( 44, 30, 4)
FCELL( 44, 31, 3)
FCELL( 44, 32, 4)
FCELL( 44, 33, 8)
FCELL( 44, 34, 4)
FCELL( 44, 35, 4)
FCELL( 44, 36, 9)
FCELL( 44, 37, 7)
FCELL( 44, 39, 7)
FCELL( 44, 41, 3)
FCELL( 44, 42, 1)
FCELL( 44, 43, 2)
FCELL( 44, 44, 5)
FCELL( 45, 13, 1)
FCELL( 45, 14, 4)
FCELL( 45, 15, 2)
FCELL( 45, 16, 1)
FCELL( 45, 18, 8)
FCELL( 45, 19, 5)
FCELL( 45, 20, 4)
FCELL( 45, 21, 7)
FCELL( 45, 22, 1)
FCELL( 45, 23, 5)
FCELL( 45, 24, 2)
FCELL( 45, 26, 2)
FCELL( 45, 29, 3)
FCELL( 45, 30, 7)
FCELL( 45, 31, 1)
FCELL( 45, 32, 7)
FCELL( 45, 33, 4)
FCELL( 45, 34, 2)
FCELL( 45, 35, 2)
FCELL( 45, 36, 4)
FCELL( 45, 37, 8)
FCELL( 45, 38, 5)
FCELL( 45, 39, 3)
FCELL( 45, 40, 5)
FCELL( 45, 41, 1)
FCELL( 45, 42, 5)
FCELL( 45, 43, 6)
FCELL( 45, 44, 2)
FCELL( 45, 45, 5)
FCELL( 46, 14, 7)
FCELL( 46, 15, 1)
FCELL( 46, 17, 5)
FCELL( 46, 18, 4)
FCELL( 46, 19, 2)
FCELL( 46, 20, 7)
FCELL( 46, 21, 3)
FCELL( 46, 22, 5)
FCELL( 46, 23, 7)
FCELL( 46, 24, 6)
FCELL( 46, 26, 1)
FCELL( 46, 29, 1)
FCELL( 46, 30, 8)
FCELL( 46, 31, 5)
FCELL( 46, 32, 8)
FCELL( 46, 33, 7)
FCELL( 46, 34, 1)
FCELL( 46, 35, 1)
FCELL( 46, 36, 2)
FCELL( 46, 37, 4)
FCELL( 46, 38, 2)
FCELL( 46, 39, 6)
FCELL( 46, 40, 7)
FCELL( 46, 41, 5)
FCELL( 46, 42, 7)
FCELL( 46, 43, 8)
FCELL( 46, 44, 1)
FCELL( 46, 45, 2)
FCELL( 46, 46, 5)
FCELL( 47, 14, 3)
FCELL( 47, 15, 5)
FCELL( 47, 16, 5)
FCELL( 47, 17, 2)
FCELL( 47, 18, 7)
FCELL( 47, 19, 1)
FCELL( 47, 20, 3)
FCELL( 47, 21, 6)
FCELL( 47, 22, 7)
FCELL( 47, 23, 8)
FCELL( 47, 24, 8)
FCELL( 47, 27, 5)
FCELL( 47, 30, 9)
FCELL( 47, 31, 2)
FCELL( 47, 32, 9)
FCELL( 47, 33, 3)
FCELL( 47, 34, 5)
FCELL( 47, 35, 5)
FCELL( 47, 36, 6)
FCELL( 47, 37, 2)
FCELL( 47, 38, 1)
FCELL( 47, 39, 3)
FCELL( 47, 40, 3)
FCELL( 47, 41, 7)
FCELL( 47, 42, 8)
FCELL( 47, 43, 9)
FCELL( 47, 45, 6)
FCELL( 47, 46, 2)
FCELL( 47, 47, 5)
FCELL( 48, 14, 1)
FCELL( 48, 15, 7)
FCELL( 48, 16, 7)
FCELL( 48, 17, 6)
FCELL( 48, 18, 3)
FCELL( 48, 19, 5)
FCELL( 48, 20, 6)
FCELL( 48, 21, 8)
FCELL( 48, 22, 3)
FCELL( 48, 23, 9)
FCELL( 48, 24, 4)
FCELL( 48, 27, 2)
FCELL( 48, 28, 5)
FCELL( 48, 30, 4)
FCELL( 48, 31, 6)
FCELL( 48, 32, 4)
FCELL( 48, 33, 6)
FCELL( 48, 34, 7)
FCELL( 48, 35, 7)
FCELL( 48, 36, 8)
FCELL( 48, 37, 1)
FCELL( 48, 39, 6)
FCELL( 48, 40, 6)
FCELL( 48, 41, 8)
FCELL( 48, 42, 9)
FCELL( 48, 43, 4)
FCELL( 48, 44, 5)
FCELL( 48, 45, 3)
FCELL( 48, 46, 1)
FCELL( 48, 47, 2)
FCELL( 48, 48, 5)
FCELL( 49, 15, 8)
FCELL( 49, 16, 8)
FCELL( 49, 17, 8)
FCELL( 49, 18, 1)
FCELL( 49, 19, 7)
FCELL( 49, 20, 8)
FCELL( 49, 21, 4)
FCELL( 49, 22, 1)
FCELL( 49, 23, 9)
FCELL( 49, 24, 7)
FCELL( 49, 27, 1)
FCELL( 49, 28, 2)
FCELL( 49, 29, 5)
FCELL( 49, 30, 2)
FCELL( 49, 31, 3)
FCELL( 49, 32, 2)
FCELL( 49, 33, 3)
FCELL( 49, 34, 3)
FCELL( 49, 35, 8)
FCELL( 49, 36, 9)
FCELL( 49, 38, 5)
FCELL( 49, 39, 3)
FCELL( 49, 40, 3)
FCELL( 49, 41, 4)
FCELL( 49, 42, 4)
FCELL( 49, 43, 7)
FCELL( 49, 44, 2)
FCELL( 49, 45, 6)
FCELL( 49, 46, 5)
FCELL( 49, 47, 6)
FCELL( 49, 48, 2)
FCELL( 49, 49, 5)
FCELL( 50, 15, 4)
FCELL( 50, 16, 4)
FCELL( 50, 17, 4)
FCELL( 50, 19, 8)
FCELL( 50, 20, 9)
FCELL( 50, 21, 2)
FCELL( 50, 23, 9)
FCELL( 50, 24, 8)
FCELL( 50, 25, 5)
FCELL( 50, 28, 6)
FCELL( 50, 29, 2)
FCELL( 50, 30, 6)
FCELL( 50, 31, 1)
FCELL( 50, 32, 6)
FCELL( 50, 33, 1)
FCELL( 50, 34, 6)
FCELL( 50, 35, 9)
FCELL( 50, 36, 4)
FCELL( 50, 37, 5)
FCELL( 50, 38, 2)
FCELL( 50, 39, 6)
FCELL( 50, 40, 6)
FCELL( 50, 41, 7)
FCELL( 50, 42, 2)
FCELL( 50, 43, 3)
FCELL( 50, 44, 6)
FCELL( 50, 45, 3)
FCELL( 50, 46, 2)
FCELL( 50, 47, 8)
FCELL( 50, 48, 1)
FCELL( 50, 49, 2)
FCELL( 50, 50, 5)
FCELL( 51, 15, 2)
FCELL( 51, 16, 2)
FCELL( 51, 17, 2)
FCELL( 51, 19, 4)
FCELL( 51, 20, 4)
FCELL( 51, 21, 6)
FCELL( 51, 23, 4)
FCELL( 51, 24, 9)
FCELL( 51, 25, 2)
FCELL( 51, 26, 5)
FCELL( 51, 28, 3)
FCELL( 51, 29, 1)
FCELL( 51, 30, 3)
FCELL( 51, 32, 8)
FCELL( 51, 34, 8)
FCELL( 51, 35, 4)
FCELL( 51, 36, 7)
FCELL( 51, 37, 2)
FCELL( 51, 38, 6)
FCELL( 51, 39, 3)
FCELL( 51, 40, 3)
FCELL( 51, 41, 3)
FCELL( 51, 42, 6)
FCELL( 51, 43, 1)
FCELL( 51, 44, 8)
FCELL( 51, 45, 1)
FCELL( 51, 46, 6)
FCELL( 51, 47, 4)
FCELL( 51, 49, 6)
FCELL( 51, 50, 2)
FCELL( 51, 51, 5)

// end of the database
template<long long value>
struct Power10
{
};

template<>struct Power10<0>  { static const long long lResult = 1;  };
template<>struct Power10<1>  { static const long long lResult = 10;  };
template<>struct Power10<2>  { static const long long lResult = 100;  };
template<>struct Power10<3>  { static const long long lResult = 1000;  };
template<>struct Power10<4>  { static const long long lResult = 10000;  };
template<>struct Power10<5>  { static const long long lResult = 100000;  };
template<>struct Power10<6>  { static const long long lResult = 1000000;  };
template<>struct Power10<7>  { static const long long lResult = 10000000;  };
template<>struct Power10<8>  { static const long long lResult = 100000000;  };
template<>struct Power10<9>  { static const long long lResult = 1000000000;  };
template<>struct Power10<10> { static const long long lResult = 10000000000;  };

// helpers
template<class List1, class List2, bool bResult>
struct ReturnSecondIfTrue
{
    typedef List1 Result;
};

template<class List1, class List2>
struct ReturnSecondIfTrue<List1, List2, true>
{
    typedef List2 Result;
};

// math 
template<long long iValue>
struct Abs
{
    const static long long iResult = (iValue>0) ? iValue : (-1*iValue);
};

template<unsigned long long lBase, unsigned long lValue>
struct Power
{
    const static unsigned long long lResult = lBase * Power<lBase, lValue-1>::lResult;
};

template<unsigned long long lBase>
struct Power<lBase, 0>
{
    const static unsigned long long lResult = 1;
};

template<long long iValue, class Tail>
struct IntList
{
};

struct IntListNull
{
};


template<class List>
struct TopIsNegative
{
};

template<>
struct TopIsNegative<IntListNull>
{
    static const bool Result = false;
};

template<long long Head, class Tail>
struct TopIsNegative<IntList<Head, Tail> >
{
    static const bool Result = Head < 0;
};


template<class List, long long value>
struct TopIs
{
};

template<long long value>
struct TopIs<IntListNull, value>
{
    static const bool Result = false;
};

template<long long Head, class Tail, long long value>
struct TopIs<IntList<Head, Tail>, value>
{
    static const bool Result = value == Head;
};



// 4321
template<long long Value, long long pow=2>
struct BitCounter
{
    const static long long lResult = 1 + BitCounter<(Value/pow), pow>::lResult;
};

template<long long pow>
struct BitCounter<0, pow>
{
    const static long long lResult = 0;
};

// ConcatLists lists
template<class List1, class List2>
struct ConcatLists
{
};

template<class List2>
struct ConcatLists<IntListNull, List2>
{
    typedef List2 Result;
};

template<long long Head1, class Tail1, class List2>
struct ConcatLists<IntList<Head1, Tail1>, List2>
{
    typedef IntList<Head1, typename ConcatLists<Tail1, List2>::Result> Result;
};


// Length Counter
template<class List>
struct LengthCounter
{
};

template<>
struct LengthCounter<IntListNull>
{
    static const int Result = 0;
};

template<long long Head, class Tail>
struct LengthCounter<IntList<Head, Tail> >
{
    static const int Result = 1 + LengthCounter<Tail>::Result;
};


// Head Zero Counter
template<class List>
struct HeadZeroCounter
{
};

template<>
struct HeadZeroCounter<IntListNull>
{
    static const int Result = 0;
    typedef IntListNull List_type;
};

template<class Tail>
struct HeadZeroCounter<IntList<0, Tail> >
{
    static const int Result = 1 + HeadZeroCounter<Tail>::Result;
    typedef typename HeadZeroCounter<Tail>::List_type List_type;
};

template<class Tail>
struct HeadZeroCounter<IntList<1, Tail> >
{
    static const int Result = 0;
    typedef Tail List_type;
};


// Bin list bulder
template<unsigned long long mask, unsigned long long value>
struct ListBuilder
{
    static const unsigned long long bitValue = (value & mask)?1:0;
    typedef IntList<bitValue, typename ListBuilder<(mask>>1), value>::Result> Result;
};

template<unsigned long long value>
struct ListBuilder<0, value>
{
   typedef IntListNull Result;
};


template<unsigned long long mask, unsigned long long value, unsigned long long bitValue>
struct ListBuilderSkipFrontZeroImpl
{
};

template<unsigned long long mask, unsigned long long value>
struct ListBuilderSkipFrontZeroImpl<mask, value, 0>
{
    static const long long bitValue = (value & (mask >> 1)) ? 1 : 0;
    typedef typename ListBuilderSkipFrontZeroImpl<(mask>>1), value, bitValue>::Result Result;
};

template<unsigned long long mask, unsigned long long value>
struct ListBuilderSkipFrontZeroImpl<mask, value, 1>
{
    typedef typename ListBuilder<mask, value>::Result Result;
};

template<unsigned long long value>
struct ListBuilderSkipFrontZeroImpl<1, value, 0>
{
    typedef typename ListBuilder<1, value>::Result Result;
};



template<unsigned long long mask, unsigned long long value>
struct ListBuilderSkipFrontZero
{
    static const long long bitValue = (value & mask) ? 1 : 0;
    typedef typename ListBuilderSkipFrontZeroImpl<mask, value, bitValue>::Result Result;
};

// Dec
template<long long value, long long mask>
struct DecListBuilderImpl
{
    static const void PrintSelf()
    {
        std::cout<<mask;
    }
    static const long long bitValue = 10*value/mask;
    typedef IntList<bitValue, typename DecListBuilderImpl<value - mask*bitValue/10, mask/10>::Result> Result;
};

template<long long value>
struct DecListBuilderImpl<value, 0>
{
   typedef IntListNull Result;
};

template<long long value>
struct DecListBuilderImpl<0, value>
{
   typedef IntListNull Result;
};

template<long long value>
struct DecListBuilder
{
    static const long long mask = Power10<BitCounter<value,10>::lResult>::lResult;
    typedef typename DecListBuilderImpl<value, mask>::Result Result;
};

template<class List>
struct PrintList
{
    static void Print()
    {
    }
};

template<long long Head, class Tail>
struct PrintList<IntList<Head, Tail> >
{
    static void Print()
    {
        std::cout<<Head<<"|";
        PrintList<Tail>::Print();
    }
};

// -----
template<bool shouldContinue, class List, long long x, long long y>
struct ListAdderImpl
{
    static const long long iRealValue = FloatingCell<y, x>::value;
    typedef IntList<iRealValue, 
                     typename ListAdderImpl<(x<52), IntListNull, x+1, y>::Result >  Result;
};

template<class List, long long x, long long y>
struct ListAdderImpl<false, List, x, y>
{
    typedef IntListNull  Result;
    static const long long iRealValue = 0;
};

template<long long Head, class Tail, long long x, long long y>
struct ListAdderImpl<true, IntList<Head, Tail>, x, y>
{
    typedef ListAdderImpl<(x<52), Tail, x+1, y> NextAdder_type;

    static const long long iRealValue = Head + FloatingCell<y, x>::value + ((NextAdder_type::iRealValue>=10)?1:0);
    typedef IntList<iRealValue%10, 
                     typename NextAdder_type::Result >  Result;
};

template<class List, long long y>
struct ListAdder
{
    typedef typename ListAdderImpl<true, List, 0, y>::Result  Result;
};

// less


template<bool b_1_is_less_than_2, 
         bool b_2_is_less_than_1, 
         class List1, 
         class List2>
struct ListLessDispatch
{
};

template<class Tail1, class Tail2>
struct ListLessDispatch<true, 
                        false, 
                        Tail1, 
                        Tail2 >
{
    static const bool Result = true;
};
template<class Tail1, class Tail2>
struct ListLessDispatch<false, 
                        true, 
                        Tail1, 
                        Tail2 >
{
    static const bool Result = false;
};

template<long long Head1, class Tail1, long long Head2, class Tail2>
struct ListLessDispatch<false, 
                        false, 
                        IntList<Head1, Tail1>, 
                        IntList<Head2, Tail2> >
{
    static const bool Result = ListLessDispatch<(Head1<Head2), 
                                                (Head1>Head2),
                                                 Tail1, 
                                                 Tail2>::Result;
};

template<long long Head1, class Tail1>
struct ListLessDispatch<false, 
                        false, 
                        IntList<Head1, Tail1>, 
                        IntListNull >
{
    static const bool Result = ListLessDispatch<(Head1<0), 
                                                (Head1>0),
                                                 Tail1, 
                                                 IntListNull>::Result;
};

template<long long Head2, class Tail2>
struct ListLessDispatch<false, 
                        false, 
                        IntListNull,
                        IntList<Head2, Tail2> >
{
    static const bool Result = ListLessDispatch<(0 < Head2), 
                                                (0 > Head2),
                                                 IntListNull,
                                                 Tail2
                                                 >::Result;
};

template<>
struct ListLessDispatch<false, 
                        false, 
                        IntListNull,
                        IntListNull >
{
    static const bool Result = false;
};

template<class List1, class List2>
struct ListLess
{
};

template<>
struct ListLess<IntListNull, IntListNull>
{
    static const bool Result = false;
};

template<long long Head1, class Tail1, long long Head2, class Tail2>
struct ListLess<IntList<Head1, Tail1>, IntList<Head2, Tail2> >
{
    static const bool Result = ListLessDispatch<(Head1<Head2), 
                                                (Head1>Head2),
                                                 Tail1, 
                                                 Tail2>::Result;
    
};

template<long long Head1, class Tail1>
struct ListLess<IntList<Head1, Tail1>, IntListNull >
{
    static const bool Result = ListLessDispatch<(Head1<0), 
                                                (Head1>0),
                                                 Tail1, 
                                                 IntListNull>::Result;
    
};

template<long long Head2, class Tail2>
struct ListLess<IntListNull, IntList<Head2, Tail2> >
{
    static const bool Result = ListLessDispatch<(0<Head2), 
                                                (0>Head2),
                                                 IntListNull, 
                                                 Tail2>::Result;
    
};


// substract lists
template<class List1, class List2>
struct SubstractListImpl
{
};

template<>
struct SubstractListImpl<IntListNull, IntListNull>
{
    typedef IntListNull Result;
};

template<long long Head1, class Tail1, long long Head2, class Tail2>
struct SubstractListImpl<IntList<Head1, Tail1>, IntList<Head2, Tail2> >
{
    typedef IntList<(Head1-Head2), typename SubstractListImpl<Tail1, Tail2>::Result> Result;
};

template<long long Head1, class Tail1>
struct SubstractListImpl<IntList<Head1, Tail1>, IntListNull >
{
    typedef IntList<Head1, typename SubstractListImpl<Tail1, IntListNull>::Result> Result;
};

template<long long Head2, class Tail2>
struct SubstractListImpl<IntListNull, IntList<Head2, Tail2> >
{
    typedef IntList<-Head2, typename SubstractListImpl<IntListNull, Tail2>::Result> Result;
};


template<class List, bool fixupThisIteration>
struct FixupNegatives
{
};

template<bool fixupThisIteration>
struct FixupNegatives<IntListNull, fixupThisIteration>
{
    typedef IntListNull Result;
};

template<long long Head, class Tail, bool fixupThisIteration>
struct FixupNegatives<IntList<Head, Tail>, fixupThisIteration>
{
    static const int extra = fixupThisIteration ? 10 : 0;
    static const bool nextTopIsNegative = TopIsNegative<Tail>::Result;
    typedef IntList< extra + (nextTopIsNegative?(Head-1): Head), typename FixupNegatives<Tail, nextTopIsNegative>::Result> Result;
};


template<class List1, class List2>
struct SubstractList
{
    typedef typename FixupNegatives<typename SubstractListImpl<List1, List2>::Result, false>::Result Result;
};


// chooser
// -----
template<bool shouldContinue, long long y, class OriginalList>
struct ListChooserImpl
{
    static const bool end = 1;
};

template<long long y, class OriginalList>
struct ListChooserImpl<false,y, OriginalList>
{
    static const bool end = 1;
    typedef IntListNull Result;
};


template<long long y, class OriginalList>
struct ListChooserImpl<true, y, OriginalList>
{
    typedef typename ListAdder<IntListNull, y>::Result NewList_type;

    static const bool newListIsLess = ListLess<NewList_type,  OriginalList>::Result;
    typedef typename ReturnSecondIfTrue<OriginalList, typename SubstractList<OriginalList, NewList_type>::Result, newListIsLess>::Result ChoosenList_type;

    typedef IntList<(newListIsLess?1:0), 
                    typename ListChooserImpl<(y<g_maxNumberOfBits), y+1, ChoosenList_type>::Result> Result;
};


template<class List>
struct ListChooser
{
    typedef ListChooserImpl<true, 0, List> Impl_type;
    typedef typename Impl_type::Result  Result;
};


typedef unsigned long long FinalIntegral_type;

template<class List, FinalIntegral_type mask>
struct ToBinaryImpl
{

};

template<FinalIntegral_type mask>
struct ToBinaryImpl<IntListNull, mask>
{
    static const FinalIntegral_type Result = 0;
};
template<long long Head, class Tail, FinalIntegral_type mask>
struct ToBinaryImpl<IntList<Head, Tail>, mask>
{
    static const FinalIntegral_type Result = (Head? mask : 0) | ToBinaryImpl<Tail, (mask >> 1)>::Result;
};

template<class List>
struct ToBinary
{
    static const FinalIntegral_type Result = ToBinaryImpl<List, 0x8000000000000000ULL>::Result;
};


template<class ListType, bool AliquotIsZero, int AliquotLength>
struct NormalizeList
{

};

// zero case
template<class ListType, int AliquotLength>
struct NormalizeList<ListType, true, AliquotLength>
{
    static const int Exponent = -1 * HeadZeroCounter<ListType>::Result;
    typedef typename HeadZeroCounter<ListType>::List_type List_type;
};

// non-zero
template<long long Head, class Tail, int AliquotLength>
struct NormalizeList<IntList<Head, Tail>, false, AliquotLength>
{
    static const int Exponent = AliquotLength - 1;
    typedef Tail List_type;
}; 

static const int g_ieeBias = 0x3FF;
static const int g_mantisSizeInBits = 11;

template<bool positiveShift, unsigned long long lData, unsigned long long lPow>
struct CalcAliquot
{
};
template<unsigned long long lData, unsigned long long lPow>
struct CalcAliquot<true, lData, lPow>
{
    const static unsigned long long Result = lData * lPow;
};
template<unsigned long long lData, unsigned long long lPow>
struct CalcAliquot<false, lData, lPow>
{
    const static unsigned long long Result = lData / lPow;
};


// Double class represents a double-precision floating-point format value:
//    value = lInputData*10^iShiftValue
template<long long lInputData, long long iShiftValue>
struct Double
{
    const static unsigned long long lData = lInputData > 0 ? lInputData : 0LL - lInputData;
    const static unsigned long long lPow = Power<10, Abs<iShiftValue>::iResult>::lResult;
    const static unsigned long long lAliquot = CalcAliquot<(iShiftValue>0),lData, lPow>::Result;  
    const static unsigned long long lFractional = (iShiftValue > 0) ? 0 : lData % lPow;

    typedef typename ListBuilderSkipFrontZero<0x8000000000000000ULL, lAliquot>::Result  AliquotBinList_type;
    typedef typename DecListBuilderImpl<lFractional, lPow>::Result  FractionalList_type;

    static const int AliquotLength = LengthCounter<AliquotBinList_type>::Result;
    static const bool AliquotIsZero = TopIs<AliquotBinList_type, 0>::Result;

    // note: list chooser produces extra 0 at the end
    typedef typename ListChooser<FractionalList_type>::Result FractionalBinList_type;

    typedef typename ConcatLists<AliquotBinList_type, FractionalBinList_type>::Result ConcatenatedList_type;

    typedef typename NormalizeList<ConcatenatedList_type, AliquotIsZero, AliquotLength> NormalizedData_type;

    typedef typename NormalizedData_type::List_type  FinalMantiss_type;
    static const int Exponent = NormalizedData_type::Exponent;

    typedef typename ListBuilder<(1ULL<<(g_mantisSizeInBits-1)), Exponent + g_ieeBias>::Result  FinalExponentBinList_type;
    
    
    typedef typename IntList<((lInputData < 0) ? 1 : 0), typename ConcatLists<FinalExponentBinList_type, FinalMantiss_type>::Result> FinalList_type;

    const static FinalIntegral_type IntegralValue = ToBinary<FinalList_type>::Result;

    static double GetDouble()
    {
        FinalIntegral_type value = IntegralValue;
        double doubleToCheck = *(double*)&value;
        return doubleToCheck;
    }
};

inline bool AreEqual(double d1, double d2, double eps = 0.000000001)
{
    if (d1 == d2)
    {
        return true;
    }
    return ((d1 + eps) > d2 && (d1 - eps) < d2);
}

} // namespace
