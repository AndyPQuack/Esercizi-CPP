#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
void tok(char a[], char b, char c[])
{
    for( int i=0; i< strlen(a); i++)
    {
        c[i] = a[i];
        c[i+1]= b;
        i++;
    }
}

int words(char a[])
{   
    int counter=0;
    for(int i= 0; i<strlen(a); i++)
    {
        if( isspace(a[i]) )
        {
            counter +=1;
        }
    }
    return counter+1;
}

int cifrep(char a[])
{   
    int counter=0;
    for(int i= 0; i<strlen(a); i++)
    {
        if( !isalpha(a[i]) and !isspace(a[i]) )
        {
            counter +=1;
        }
    }
    return counter;
}

void lettera(char frase[])
{
    for( int j=0; j< strlen(frase); j++)
    {
        frase[j] = tolower(frase[j]);
    }
    int contatori[26] = {};
    for( int i=0; i< strlen(frase); i++)
    {
       if(isalpha(frase[i]))
       {
        
        for(int j=0; j < 26; j++)
        {   
            //cout<< "  "<< int(frase[i] - 97);
            if(int(frase[i])-97 == j)
            {
                contatori[j] +=1;
            }
        }
       }
        
    }
    for( int j=0; j< 26; j++)
    {
        cout<<(char)(j+97)<< ": " <<contatori[j]<< "  ";
    }
}

int main()
{   
    const int size = 1001;
    char frase[size];
    char frasetok[2*size]= {};
    //cout<< "inserire frase: "<< endl;
    //cin.getline(frase, size);
    char carattere;
    //cout<< "scegliere carattere: ";
    //cin>> carattere;
    for( int i=0; i< strlen(frase); i++)
    {
        frasetok[i*2] = frase[i];
       
    }
    
    for( int i=0; i< strlen(frase)-1; i++)
    {
        frasetok[i*2 + 1]= carattere;
    }
    frasetok[strlen(frase)*2 -1] ='\0';
    
    for( int j=0; j< strlen(frasetok); j++)
    {
        //cout<< frasetok[j];
    }



    char frase_2[size]= {};

    cin.getline(frase_2, size);

    //cout<< words(frase_2);

    //cout << cifrep(frase_2);

    //cout << lettera(frase_2); DA ERRORE PERCHE DA FUNZIONE VOID NON SI PUO FARE COUT



    


    return 0;
}