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
bool abbondante(int x)
{    
    int verifica= 0;
    for( int i=1; i <= x/2; i++)
    {
        if( x%i == 0)
        {
            verifica += i;
        }
    }
    if (verifica > x)
    {
        return true;
    }

    return false;
    
}
bool difettivo(int x)
{    
    int verifica= 0;
    for( int i=1; i <= x/2; i++)
    {
        if( x%i == 0)
        {
            verifica += i;
        }
    }
    if (verifica < x)
    {
        return true;
    }

    return false;
    
}
bool abbondante_p(int n)
{
    if (abbondante(n)) {
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0) // If divisor
                if (!difettivo(i)) // Is not deficient
                    return false; // Not AP
        
        return true; // Here only if all the other checks were ok
    } else {
        // Must be abundant in the first place
        return false;
    }
}



bool isSemiPerfect(int n)
{
    return isSPRecursive(n, 0, 0);
}

bool isSPRecursive(int n, int sum, int div)
{
    for (int i = div + 1; i <= n / 2; i++) {
        if (n % i == 0) {
            if (sum + i == n || isSPRecursive(n, sum + i, i))
                return true;
        }
    }

    return false;
}




int main()
{   
    int soglia;
    //cout<< "scegliere fino a dove analizzare i numeri: "<< endl;
    //cin>> soglia;
    for(int i =0; i< soglia+1; i++)
    {
        //if(perfetto(i)) cout<< i << "  perfetto"<< endl;
        //if(abbondante(i)) cout<< i << "  abbondante"<< endl;
        //if(difettivo(i)) cout<< i << "  difettivo"<< endl;
        //if(abbondante_p(i)) cout<< i << "  abbondante perfetto"<< endl;
    }
    cout<< isSemiPerfect(18);
    
    return 0;
}