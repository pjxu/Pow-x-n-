#ifndef POWER_ALGO_H
#define POWER_ALGO_H

#include "math.h"

namespace POW
{
    class PowAlgorithms
    {
    public:
        PowAlgorithms();
        ~PowAlgorithms();

        double_t Run(double_t, double_t);

        bool GetBool()
        {
            return isGood;
        }
    private:
        bool isGood;
    };
}

#endif // !POWER_ALGO_H
