#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double L1=6;
    double Dy=10-L1;
    double Dx=3;
    double V1=5;
    double V2=2;
    double L2=sqrt(Dy*Dy+Dx*Dx);
    double T1=L1/V1;
    double T2=L2/V2;
    double TT=T1+T2;
    cout<<TT<<endl;

    return 0;

}