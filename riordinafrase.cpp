#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
void stampafrase(char x[], int y)
{   
    int counter=0;
    int k;
    int indice;
    for(int i =0; i<strlen(x); i++)
    {
        if(isspace(x[i]) or x[i] == '\0')
        {   
            indice = i;
            counter++;
            if(counter == y)
            {   
                k=indice+1;
                i = strlen(x) +1;
                

            }
        }
    }
     
    while( !isspace(x[k]) or x[k]== '\0')
    {
        cout<< x[k];
        k++;
    }
    cout<< " ";
    
    

}

int main()
{   
    const int len = 101;
    int numeri[len] = {};
    int leneff;
    char frase[len]={};
    cout<< "inserire frase: "<< endl;
    cin.getline(frase, len);


    cout<< " inserire valori: "<< endl;
    for( int i =0; i<len; i++)
    {
        cin >> numeri[i];
        if(numeri[i] == -1)
        {
            leneff = i;
            i = 101;
        }
    }

    for(int j =0; j<leneff; j++)
    {
        stampafrase(frase, numeri[j]);
    }
    //stampafrase(frase, 2);



    return 0;
}
