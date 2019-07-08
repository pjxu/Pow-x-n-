#include "PowerAlgo.h"
#include <iostream>

namespace POW
{
    PowAlgorithms::PowAlgorithms():
        isGood(false)
    {
    }

    PowAlgorithms::~PowAlgorithms()
    {
        //
    }

    double_t PowAlgorithms::Run(double_t x, double_t n)
    {
        if ((x < 100 && x > -100) && (n > (-2 ^ 31) && n < (2 ^ 31 - 1)))
        {
            isGood = true;
        }
        else
        {
            printf_s("Input Vars Out of Range\n\n");
            isGood = false;
        }
        if (isGood)
        {
            return pow(x, n);
        }
    }
}