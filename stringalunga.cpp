#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{   
    const int len =101;
    char str[len];
    cout<< "inserire sequenza: "<< endl;
    cin.getline(str, len);
    int counter =1;
    int temp_counter;
    for (int i =0; i < strlen(str); i++)    
    {   
        
        bool verifica = false;
        for( int j=0; j < counter; j++)
        {
            if(str[i+1] != str[i-j])
            {   
                verifica = true;
            }
            if(! verifica)
            {
                j= counter +2;


            }


        

        }
        if(verifica)
        {
            counter +=1;
        }
        if(!verifica)
        {
            if(counter > temp_counter)
            {
                temp_counter = counter;
            }
            counter=1;
        }        
        }


    }
    cout<< "la stringa lunga di: "<< temp_counter -1 ; //al contatore viene anche sommato il conteggio di \0 dovuto a str[i+1] quindi tolgo 1.

    


    return 0;
}