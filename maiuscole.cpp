#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{   
    const int len = 101;
    char frase[len] = {};
    cout<< "inserire frase: "<< endl;
    cin.getline(frase, len);
    for( int i=0 ; i< strlen(frase); i++)
    {   
        
        if(ispunct(frase[i]))
        {   
            if( frase[i] == '.' or frase[i] == '?' or frase[i] == '!') 
              
            {   
                bool eseguito = true;
                int k = i;
                while( eseguito)
                {   
                    if(isalpha(frase[k]))
                    {
                        frase[k] = toupper(frase[k]);
                        eseguito = false;
                        
                    }
                    k++;
                    
                }
            }
        }
    }
    frase[0] = toupper(frase[0]);
    for( int j=0 ; j< strlen(frase); j++)
    {
        cout<< frase[j];
    }

    
    


    return 0;
}