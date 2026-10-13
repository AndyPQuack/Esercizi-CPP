#include <iostream>
using namespace std;
double Tocel(double x)
{
    x -= 273.15;
    return x;
}

double ToFahr(double x)
{
    double f;
    f = (9/5)*x - 459.67;
    return f;
}

int main()
{   
    double tempK[12]= {};
    double j = 247;
    double inc = 0.25;
    for(int i=0; i<13;i++)
    {   
        tempK[i] = j;
        j += 0.25;
        cout<< tempK[i]<< "   "<< Tocel(tempK[i])<< "   "<< ToFahr(tempK[i])<< endl;
    }   
    return 0;
}
