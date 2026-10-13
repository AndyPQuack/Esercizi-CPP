#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    const int len = 1000;
    char frase[len] = {};
    char fraseop[len] = {};
    cout<< "inserire frase: "<< endl;
    cin.getline(frase,len);
    for(int i=0; i<strlen(frase); i++)
    {
        if(isalnum(frase[i]))
        {
            for(int k=0; k<len; k++)
            {
                if(fraseop[k] == '\0')
                {
                    fraseop[k] = tolower(frase[i]);
                    k = len+1;
                }
            }
        }
    }
    cout<< "la frase modificata: "<< endl;
    for(int j=0; j<len; j++)
    {
        cout<< fraseop[j];
    }




    return 0;
}