#include <iostream>
#include "functions.h"

int main()
{

	double lowerBound, upperBound;
	int iterations;

	lowerBound = 0.0;
	upperBound = 90.50;
	iterations = 1000;

	double estimate = monteCarloEstimate(lowerBound, upperBound,iterations);

	printf("Estimate for %.1f -> %.1f is %.2f, (%i iterations)\n",
			lowerBound, upperBound, estimate, iterations);

	return 0;
}



