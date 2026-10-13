#include <iostream>
using namespace std;
int main()
{   int numero[8]={};
    int paritybit[9] ={};
    int counter =0;
    cout<< "inserire i bit del numero (0 o 1): "<< endl;
    for(int i=0; i<8; i++)
    {
        cin>> numero[i];
        if(numero[i] == 1)
        {
            counter +=1;
        }
        paritybit[i] = numero[i];
    }
    if(counter ==0 || counter%2 == 0)
    {
        paritybit[8] = 1;
    }
    else
    {
        paritybit[8] = 0;
    }
    cout<< " il numero con il bit aggiunto: "<< endl;
    for(int j=0; j<9; j++)
    {
        cout<< paritybit[j];
    }
    
    


    
    
    
    
    return 0;
}