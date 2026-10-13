#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char frase[101];
    cout<< "inserire frase: "<< endl;
    cin.getline(frase, 101);
    char carattere;
    cout<< "scegliere carattere: ";
    cin>> carattere;
    int counter =0;

    for(int j = 0; j <= strlen(frase); j++)
    {
        if(frase[j] == carattere)
        {
            frase[j] = toupper(frase[j]);
            counter++;
        }
    }

    for(int i = 0; i <= strlen(frase); i++)
    {
        cout<< frase[i];
    }
    cout<< endl<< "Occorrenze: "<< counter;
    
    


    return 0;
}