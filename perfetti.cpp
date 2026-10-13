#include <iostream>
using namespace std;
bool perfetto(int x)
{    
    int verifica= 0;
    for( int i=1; i <= x/2; i++)
    {
        if( x%i == 0)
        {
            verifica += i;
        }
    }
    if (verifica== x)
    {
        return true;
    }

    return false;
    
}

int main()
{   
    int N;
    cout<< "Inserire fino  a dove calcolare i numeri perfetti: "<< endl;
    cin>> N;
    for(int i=1; i< N+1; i++)
    {
        if(perfetto(i))
        {
            cout<< i<< "   ";
        }
    }

    
    
    
    return 0;
}