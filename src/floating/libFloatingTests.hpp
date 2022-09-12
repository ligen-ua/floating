#pragma once

#include "libFloatingMain.hpp"
#include <iostream>
#include <iomanip>
namespace lff
{

extern bool AllSucceeded;

template<class DoubleType>
struct Test
{
    static bool DoTest(double valueToCompare, double eps = 0.00000000001)
    {
        double doubleToCheck = DoubleType::GetDouble();
        bool result = AreEqual(doubleToCheck, valueToCompare, eps);
        if (result)
        {
            std::cout << "[-- SUCCESS --]: " << std::setprecision(15) << valueToCompare << "\n";
        }
        else
        {
            AllSucceeded = false;
            std::cout << "[== ERROR ==]: "<< valueToCompare<<"\n";
            std::cout << "AliquotBinList_type: ";
            PrintList<typename DoubleType::AliquotBinList_type>::Print(std::cout);
            std::cout << "\n";
            std::cout << "FractionalBinList_type: ";
            PrintList<typename DoubleType::FractionalBinList_type>::Print(std::cout);
            std::cout << "\n";
            std::cout << "Exponent: ";
            std::cout << DoubleType::Exponent << "\n";
            std::cout << "[== END ==]\n";
        }
        return result;
    }
};

}

