#include <iostream>
#include <cmath>
using namespace std;
double mediaarr( double a[], int len )
{
    double sum =0;
    for(int i=0; i<len; i++)
    {
        sum += a[i];
    }
    double media = sum/len;
    return media;
}
int main()
{   
    const int len = 100;
    double numeri[len] = {};
    int leneff;
    cout<< " inserire valori: "<< endl;
    for( int i =0; i<len; i++)
    {
        cin >> numeri[i];
        if(numeri[i] == -1000)
        {
            leneff = i;
            i = 101;
        }
    }

    double media = mediaarr(numeri, leneff);

    // calcolo sommattoria
    int N = leneff+1;
    double sommatoria =0;
    for(int j=0; j< N; j++)
    {
        sommatoria = sommatoria + ((numeri[j] - media )*(numeri[j] - media ));
    }
    cout<< sqrt(sommatoria/N);


    return 0;
}
