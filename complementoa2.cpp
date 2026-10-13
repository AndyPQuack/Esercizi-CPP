//Scrivere un codice che prenda in ingresso due numeri decimali interi compresi tra
//-128 e 127. Questi due numeri devono essere convertiti in binario ad 8 bit usando la
//codifica a complemento a 2. A questo punto il programma deve creare un nuovo
//numero binario a 8 bit, dove il bit i-esimo sia l'OR fra i due bit corrispondenti di A e
//B.

#include <iostream>
using namespace std;
bool* decimal2binary(int x){
    if(x<0)
        return decimal2binary(256+x); //256, trova il complementare per la codifica complemento a due.
    bool *res = new bool[8];
    for(int i=0; i<8; ++i){
        res[7-i] = x%2;
        x /= 2;
    }
    return res;
}

int main()
{   
    const int bit =8;
    int numero1;
    int numero2;
    cout<< " fornire numeri: "<< endl;
    cin>> numero1;
    cin>> numero2;
    int binario1[bit] ={};
    int binario2[bit] ={};
    // conversione
    if(numero1< 0)
    {
        numero1 +=256;  // sommo l estremo negativo cambiato di segno moltiplicato per due per trovare il suo complementare 
                        // esempio 19 in complemento a 2 è -19 
    }
        if(numero2< 0)
    {
        numero2 +=256;
    }

    for(int i =0; i<bit; i++)
    {
        binario1[bit-i-1] = numero1%2;
        numero1 /= 2;
        binario2[bit-i-1] = numero2%2;
        numero2 /= 2;

    }

    for(int i =0; i<bit; i++)
    {
        cout<< binario1[i];
    }

    cout<< endl;
    for(int i =0; i<bit; i++)
    {
        cout<< binario2[i];
    }

    return 0;
}