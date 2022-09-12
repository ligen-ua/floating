# libFloating

This is a fun project that allows C ++ developers to manipulate floating point constants (IEEE 754) at compile time.

All the functionality is here:
> src/floating/libFloatingMain.hpp

See lff::Double<param1, param2> template which represents a double-precision floating-point value:
> value = param1*(10^param2)

Where ^ is the exponentiation operator.

## How to use:

```
#include "libFloatingMain.hpp"

int main()
{
   // Generate a double in compile time:
   const lff::FinalIntegral_type x = lff::Double<1234, -2>::IntegralValue; 

   // Let's check, it should be binary compatible to 12.34:
   FUZZY_EQUAL(*(double*)(&x), 12.34);                    
}
```

## Currently supports:

# Windows 
* VS 2017, VS 2019

See:
src/floating.sln

# Unix/Linux
Use:
```
cmake-build.sh
cmake-test.sh
```
