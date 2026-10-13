#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int indice(char x)
{   
    int a;
    const int offset = int('a');
    if(isalpha(x))
    {
        x = tolower(x);
        a = int(x)- int('a');

        
    }
    return a;
}
bool anagramma(int a[26], int b[26])
{   
    bool verificato = true;
    for(int j=0; j<26; j++)
    {
        if(a[j] != b[j])
        {
            verificato = false;
        }
        if(!verificato)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    const int len = 1000;
    char frase[len] = {};
    char frase1[len] = {};
    int contatori[26] = {};
    int contatori1[26] = {};
    cout<< "inserire frase: "<< endl;
    cin.getline(frase,len);
    cout<< "inserire seconda frase: "<< endl;
    cin.getline(frase1,len);
    for(int i=0 ; i < strlen(frase); i++)
    {
        if(isalpha(frase[i]))
        {
            frase[i]= tolower(frase[i]);
            contatori[indice(frase[i])] +=1;
        }
    }

    for(int i=0 ; i < strlen(frase1); i++)
    {
        if(isalpha(frase1[i]))
        {
            frase1[i]= tolower(frase1[i]);
            contatori1[indice(frase1[i])] +=1;
        }
    }

    //for(int j=0; j<26; j++)
    //{
        //cout<<contatori1[j]<<" : " <<contatori[j]<<" ";
    //}

    if(anagramma(contatori,contatori1))
    {
        cout<< "permutazione di frase";
    }
    else{ cout<< "NON permutazione";}



    return 0;
}