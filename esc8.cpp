#include <iostream>
using namespace std;
int Bigger(int x[] )
{   
    int Big = x[0];
    for(int i=1; i<10; i++ )
    {   
        
        if(x[i] > Big)
        {
            Big = x[i];
            
        }
    }
    
    for(int j=1; j<10; j++ )
    {   
        
        if(x[j] == Big)
        {
            x[j] =0;
            
        }
    }


    
    return Big;
}
int main()
{   
    int numeri[] = {3,4,9,6,7,11,4,11,6,7};
    
    cout<< "il primo maggiore : " << Bigger(numeri)<< endl;
    cout<< "il secondo maggiore : " << Bigger(numeri)<< endl;


    return 0;
}