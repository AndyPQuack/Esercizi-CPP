#include<iostream>
#include<cmath>
using namespace std;
int cifre(int &numero)
{
    //while (numero > 0) {
    int cifra = numero % 10;  // ottieni la cifra meno significativa
       // std::cout << cifra << " ";
    numero = numero / 10;  // elimina la cifra meno significativa
    
    return cifra;
}

int main()
{  
    int numero;
    cout<< "scegliere il numero n di cui calcolare il numero di Armstrong"<< endl;
    cin>> numero;
    for(int i= pow(10, numero-1); i< pow(10,numero);i++)
    {   
        int s = i;
        if(pow(cifre(i),numero)+pow(cifre(i),numero)+pow(cifre(i),numero)== s)
        {
            cout<< s<< " é un numero di Armstrong"<< endl;
        }
        i=s;
    }


    
    
    
    return 0;  
}
