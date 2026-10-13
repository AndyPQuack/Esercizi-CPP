#include <iostream>
using namespace std;
bool primo(int x)
{
    for( int i=2; i <= x/2; i++)
    {
        if( x%i == 0)
        {
            return false;
        }
    }

    return true;
    
}

int main()
{   
    int N;
    cout<< "Inserire fino  a dove calcolare i numeri primi: "<< endl;
    cin>> N;
    for(int i=2; i< N+1; i++)
    {
        if(primo(i))
        {
            cout<< i<< "   ";
        }
    }
    //cout<< primo(N);
    
    
    
    return 0;
}
