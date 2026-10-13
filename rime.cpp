#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char frase[1001] = {};
    cout<< "inserire frase: ";
    cin.getline(frase, 1001);
    char parola[31] ={};
    cout<< "scegliere parola: ";
    cin.getline(parola, 31);
    int counter = 0;
    for(int i=0; i< strlen(frase); i++)
    {   
        
        if(isspace(frase[i]) or frase[i] == '\0')
        {   
            
            for( int j=4; j>1; j--)
            {
                if(frase[i+1-j] == parola[strlen(parola)+ 1 - j])
                {
                    counter++;
                }
            }
        }
        

    }

    cout<<counter/3;



    return 0;
}