#include <iostream>
using namespace std;
int main()
{   
    const int len = 100;
    int numeri[len] = {};
    int leneff;
    cout<< " inserire valori: "<< endl;
    for( int i =0; i<len; i++)
    {
        cin >> numeri[i];
        if(numeri[i] == -1)
        {
            leneff = i;
            i = 101;
        }
    }

    int somma=0;
    for(int i=0; i<leneff; i++)
    {
        if(i%2==0)
        {
            somma+= numeri[i];
        }
        else{ somma -= numeri[i];}

        cout<< somma<< " ";
    }

    return 0;
}
