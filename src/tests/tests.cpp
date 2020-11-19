#include "libFloatingTests.hpp"

namespace lff
{
    bool AllSucceeded = true;
}
void tests()
{
    lff::Test<lff::Double<11, -1>>::DoTest(1.1);
    lff::Test<lff::Double<0, 1>>::DoTest(0);
    lff::Test<lff::Double<-11, -1>>::DoTest(-1.1);
    lff::Test<lff::Double<1, -1>>::DoTest(0.1);
    lff::Test<lff::Double<1234, -2>>::DoTest(12.34);
    lff::Test<lff::Double<-1234, -2>>::DoTest(-12.34);
    lff::Test<lff::Double<9009099, -3>>::DoTest(9009.099);
    lff::Test<lff::Double<85125, -3>>::DoTest(85.125);
    lff::Test<lff::Double<0, 0>>::DoTest(0);
    lff::Test<lff::Double<4, -10>>::DoTest(0.0000000004);
    lff::Test<lff::Double<1192092896, -16>>::DoTest(0.0000001192092896, 0.0000000000000001);
    lff::Test<lff::Double<3402823466ULL, 9>>::DoTest(3402823466e+9);
}