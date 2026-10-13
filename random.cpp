#include <iostream>
using namespace std;
bool Bigger(int x, int y )
{   
    if(x>y)
    {
        return true;
    }

    return false;
}
int main()
{   
    int numero = rand()%10000+1; // genera un numero da 1 a 10000
    cout<< "numero casuale: "<< numero<< endl;
    cout<< "inserire numeri finche non si becca quello giusto: ";
    int scelta =0;
    while (scelta != numero)
    {
        cin>> scelta;
        if (scelta != numero)
        {
            if(Bigger(scelta, numero))
            {
                cout<< "il numero cercato è minore"<< endl;
            }
            else
            {
                cout<< "il numero cercato è maggiore"<< endl;
            }
        }
    }
    cout<< "il numero cercato: "<< scelta<< endl;

    return 0;
}

//v1 = rand() % 100;         // v1 in the range 0 to 99
//v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
//v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014