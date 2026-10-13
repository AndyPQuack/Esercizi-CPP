#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char frase[101] ={};
    cout<< "inserire frase: "<< endl;
    cin.getline(frase, 101);
    //frase[strlen(frase)+1] = ' ';
    int counter =0;
    for(int i=0; i < strlen(frase); i++)
    {   //cout<< i+2;
        if(isspace(frase[i]) or i == 0)
        {   
            int k =i;
            int counter_temp =0;
            while(!isspace(frase[k]) or frase[k] == '\0')   //or i+2> strlen(frase) )
            {
                if(frase[k]=='a' or frase[k]=='e' or frase[k]=='i' or frase[k]=='o' or frase[k]=='u')
                {
                    counter_temp++;
                }
                k++;
            }
            i=k;
            if(counter_temp> counter)
            {
                counter = counter_temp;
            }
        }
    }
    
    //cout<<endl<< strlen(frase);
    cout<< "le vocali sono: "<< counter;





    return 0;

}