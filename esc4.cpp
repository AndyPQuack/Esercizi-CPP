#include <iostream>
#include<cmath>
using namespace std;
double ipo(double x, double y)
{
    double valore;
    valore = sqrt(pow(x,2) + pow(y, 2));
    return valore;
}


int main()
{   
    double cat1,cat2;
    cout<< "inserire la misura dei due cateti: "<< endl;
    cin>> cat1;
    cin>> cat2;
    cout<< ipo(cat1, cat2)<< endl;




    return 0;
}