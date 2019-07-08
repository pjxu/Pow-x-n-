#include "PowerAlgo.h"
#include <iostream>

int main()
{
    double_t dx = 0.000;
    double_t dn = 0.000;
    bool isXgood = false;
    bool isNgood = false;
    printf_s("Enter x for base:");
    std::cin >> dx;
    if (std::cin.good())
    {
        isXgood = true;
    }
    else
    {
        isXgood = false;
    }
    printf_s("Enter n for power:");
    std::cin >> dn;
    if (std::cin.good())
    {
        isNgood = true;
    }
    else
    {
        isNgood = false;
    }
    if (isXgood && isNgood)
    {
        POW::PowAlgorithms PwAgrhm;
        double_t slResult = PwAgrhm.Run(dx, dn);
        if (PwAgrhm.GetBool())
        {
            std::cout << "pow(" << dx << ", " << dn << ") is " << slResult << std::endl;
        }
        else
        {
            printf_s("Error Output\n\n");
        }
    }
    system("pause");
}