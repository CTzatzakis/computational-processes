#include <iostream>
#include <iomanip>

using namespace::std;
#define iterations 100000

int main() {
    std::cout << "Madhava–Leibniz pi" << std::endl;

    double pi=1;
    for (int i =0; i<iterations; i++)
    {
        double den=i*2+3;
        if(i%2==0){
            pi-=(1/den);
        }else {
            pi+=(1/den);
        }
    }
    pi *=4;
    std::cout << std::fixed;
    std::cout << std::setprecision(100);
    cout << "Pi is : " << pi << endl;


    return 0;
}
