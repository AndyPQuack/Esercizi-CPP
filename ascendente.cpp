#include <iostream>
using namespace std;
int main()
{   
    int numeri[20];
    for( int i=0; i<20; i++)
    {
        cin>> numeri[i];
    }
    bool swap;
        
    do { 
        swap = false;
        
        for (int i = 0; i <  19; i++) {
            
            if (numeri[i] > numeri[i + 1]) {
                int temp = numeri[i];
                numeri[i] = numeri[i + 1];
                numeri[i + 1] = temp;

                swap = true;
            }
        }
        // Continue until there are no more swaps
    } while (swap);
    
    
    for( int s=0; s < 20; s++)
    {
        cout << numeri[s]<< "   ";
    }

    return 0;
}
