#include<iostream>
#include<cmath>
using namespace std;


int main()
{  
    int numero;
    cout<< "scegliere il numero di cui calcolare la radice"<< endl;
    cin>> numero;
    for(int i=1; i< numero; i++)
    {   
        int a = i*i;
        //if(i*i == numero)
        {
            //cout<< "la radice é: "<< i;         
        }
        if(a > numero)
        {
            cout<< "la radice é: "<< i-1; 
            i= numero +1;
        }
    }



    
    
    
    return 0;  
}
