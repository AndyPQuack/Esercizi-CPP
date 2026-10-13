#include <iostream>
using namespace std;

/**
 * @brief Determinare se un array è formato da più ripetizioni della stessa sequenza
 */

// Verifico se l'array è formato da ripetizioni di una sequenza di lunghezza k
bool check_repetitions(int x[], int n, int k)
{
    for(int j=0; j<k; j++) // per ogni elemento nella sequenza
        for(int i=j; i+k<n; i+=k) // verifica se è ripetuto ogni k elementi
            if(x[i]!=x[i+k])
                return false;
    return true;
}

int main()
{
    int x[100];
    int n=-1;
    do{
        n++;
        cin>>x[n];
    }
    while(x[n]>=0 && n<100);

    // verifico se l'array è formato da ripetizioni di una sequenza di lunghezza k
    for(int k=1; k<=int(n/2); k++)
    {
        if(check_repetitions(x, n, k)){
            // cout<<"L'array è formato da ripetizioni di una sequenza di lunghezza "<<k<<endl;
            cout<<k<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}