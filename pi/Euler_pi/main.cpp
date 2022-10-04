#include <iostream>

using namespace::std;

int main() {
    std::cout << "Euler Pi" << std::endl;
    int max = 10000;
    auto small = 1e-80000;
    double Sm =1;
    double sum =1;

    for(int m=1; m<max; m++)
        {
            Sm *= m/(2.0*m+1);
            sum += Sm;
                if(Sm<small)
                {
                    cout << "Number of iterations: "<< m << endl;
                    break;
                }
        }
    cout.precision(12);
    cout << "Estimate of pi: " << 2*sum <<endl;

    return 0;
}
