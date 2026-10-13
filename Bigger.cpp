#include <iostream>
using namespace std;
void Bigger(int x[] )
{   
    int Big = x[0];
    for(int i=1; i<10; i++ )
    {   
        
        if(x[i] > Big)
        {
            Big = x[i];
        }
    }
    cout<< "il maggiore è :"<< Big<< endl;
    return;
}
int main()
{   
    int numeri[] = {3,4,5,6,7,9,4,3,6,7};
    
    Bigger(numeri);

    return 0;
}