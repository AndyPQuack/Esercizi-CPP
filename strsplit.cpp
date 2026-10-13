#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char stringa[] ="20C@34F@12F@23C";
    char temp[30]={};
    int counter =0;
    for(int i=0; i<=strlen(stringa); i++)
    {   
        if (stringa[i] == '@' or i == strlen(stringa) )
        {   

            cout<< "i vale: "<< i;
            for(int k=0; k <counter; k++)
            {
                temp[k]= stringa[i- counter+k];
            }
            cout<<"counter:" <<counter<<endl;

            for(int j=0; j< 8; j++)
            {
                cout<< temp[j];
            }
            i++;
            counter=0;


        }
        counter +=1;



    
    }
        
    
    //for(int j=0; j< 8; j++)
    {
        //cout<< temp[j];
    }




    return 0;
}