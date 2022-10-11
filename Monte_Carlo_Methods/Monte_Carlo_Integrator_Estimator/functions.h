//
// Created on 11/10/2020
//
#include <cstdlib>
#include "random"
#include <cmath>

#ifndef MONTECARLO_FUNCTIONS_H
#define MONTECARLO_FUNCTIONS_H


double integrate(double x)
{
    return pow(x,4)*exp(-x);
}


double monteCarloEstimate(double lowBound, double upBound, int iterations)
{
    double totalSum = 0;
    double randNum, functionVal;

    std::random_device rd;
    std::mt19937_64 mt(rd()); //Standard mersenne_twister_engine seeded with random device or a specified number
    std::uniform_real_distribution<double> dist(0.0, RAND_MAX);

    int iter = 0;

    while (iter<iterations-1)
    {
        randNum = lowBound + (float(dist(mt))/RAND_MAX) * (upBound-lowBound); //Select a rand num within the limits
        functionVal = integrate(randNum); //Sample func value
        totalSum += functionVal; //Add fx value to sum
        iter++;
    }

    double estimate = (upBound-lowBound)*totalSum/iterations;

    return estimate;
}


#endif //MONTECARLO_FUNCTIONS_H
