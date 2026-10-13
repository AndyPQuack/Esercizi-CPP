#include <iostream>
using namespace std;
int main()
{   
    const int len = 100;
    double numeri[len] = {};
    int leneff;
    cout<< " inserire valori: "<< endl;
    for( int i =0; i<len; i++)
    {
        cin >> numeri[i];
        if(numeri[i] == 0)
        {
            leneff = i;
            i = 101;
        }
    }
    double media[leneff] = {};
    double somma =0;
    for( int j =1; j< leneff +1; j++)
    {
        somma += numeri[j-1];
        media[j-1]= somma/j;
        cout<< media[j-1]<< "  ";
    }

    return 0;
}
