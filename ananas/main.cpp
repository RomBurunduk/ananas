#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double integral(double x, double a, double b){
    return (b*b*x - (b*b*x*x*x)/(3*a*a));
}

int main() {
    const double PI = 3.141592653589793;
    double a,b,n;
    cin>>b>>a>>n;
    double wid=a/n;
    a/=2;
    b/=2;

    for (double i=a; i>-a; i-=wid) {
        std::cout.precision(6);
        std::cout<<std::fixed<<round(((integral(i,a,b)-integral(i-wid,a,b))*PI)*1000000)/1000000<<std::endl;
    }
}
