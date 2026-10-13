#include <iostream>
using namespace std;
double fact(double x)
{

    double b=1;

    for(int j=0; j<x; j++)
    {   
        int n;
        n= x-j;
        
        b*=n;
    }
    return b;
}
int main()
{   
    int f;
    cout<<" decidere dove troncare la serie: "<< endl;
    cin>> f;
    double e=0;
    for(int i=0; i<f; i++)
    {
        e+= 1/fact(i);
    }
    cout<< "e vale: "<< e<< endl;


    return 0;
}