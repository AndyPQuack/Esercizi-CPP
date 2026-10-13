#include <iostream>
using namespace std;
int main()
{   
    int numeri[] = {-1, 0, 1, 2, -1, -4};
    int len = sizeof(numeri)/sizeof(numeri[0]); // restituisce la lunghezza dell' array di interi
    for( int i=0; i<len; i++)
    {
        for(int j=0 ; j< len; j++)
        {   
            
            if( i!= j)
            {
                int sum1 = numeri[i] + numeri[j];
                for( int k=0; k<len; k++)
                {
                    if( k!= i && k!=j && sum1 + numeri[k] == 0)
                    {
                        cout<< numeri[i] <<"  "<< numeri[j]<< "  " <<numeri[k]<< endl;
                    }
                    

                    
                }
            }
        }
    }
    
    
   return 0; 
    
}