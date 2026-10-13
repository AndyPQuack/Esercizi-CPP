#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
using namespace std;
int digit(char x)
{
    int a = int(x) - int('0');
    return a;
}
int main()
{   
    
    char num1[100] = {};
    char num2[100] = {};
    cout<< "inserire primo numero binario (0 o 1): "<< endl;
    cin.getline(num1,100);

    cout<< "inserire secondo numero binario(0 o 1): "<< endl;
    cin.getline(num2,100);

    //conversione
    bool num_1[8];
    bool num_2[8];
    for(int i =0; i<8; i++)
    {
        num_1[i] = digit(num1[i]);
        num_2[i] = digit(num2[i]);
    }
    int num_bin[8];
    for(int j =0; j<8; j++)
    {
        if(j%2 == 0)
        {
            if( num_1[j] && num_2[j])
            {
                num_bin[j] = 1;
            }
            else
            {
                num_bin[j] = 0;
            }
        }
        
        
        if(j%2 != 0)
        {
            if( num_1[j] or num_2[j])
            {
                num_bin[j] = 1;
            }
            else
            {
                num_bin[j] = 0;
            }
        }

        //cout<< num_bin[j];
    }

    // trovo decimale
    int decimale =0;
    for(int k=0; k<8; k++)
    {
        decimale += num_bin[k] * pow(2, k);
    }
    cout<< endl<< "il numero decimale: "<< decimale;



    return 0;
}
