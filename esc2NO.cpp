#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{   
    int N = 101;
    char frase[N];
    char frase2[N];
    char frase_fin[N];
    cout<< " digitare la frase per verificare palindroma: "<< endl;
    cin.getline(frase,N-1);
    bool Y =0;
    int counter;
    for(int i=0; i<strlen(frase); i++)
    {   
        frase[i] = tolower(frase[i]);

        if(! isspace(frase[i]) && ! ispunct(frase[i]))
        {  
            
            frase2[i] = frase[i];
            //cout<< frase2[i];
        }
        else
        {
            frase2[i]= 'A';
            //cout<< frase2[i];
        }
        
    }
    //cout<<"   "<<endl;
    //cout<< "lunghezza 1 : "<< strlen(frase)<< endl;
   // cout<< "lunghezza 2 : "<< strlen(frase2)<< endl;

   for(int j=0; j<strlen(frase2); j++)
   {
        cout<< frase2[j];
        if( frase2[j] != 'A')
        {
            for(int k=0; k<strlen(frase2); k++)
            {
                frase_fin[k]= frase2[j];
            }
        }
        else
        {
            j++;
        }
    }
    
    for(int s=0; s<strlen(frase_fin); s++)
    {
        cout<< frase_fin[s];
    }




    return 0;
}