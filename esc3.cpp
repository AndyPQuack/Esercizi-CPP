#include <iostream>
#include<cmath>
using namespace std;
int main()
{   
    bool Y=1;
    double deci[50]={};

    cout<< "inserire numeri decimali da arrotondare, inserire 0 per terminare: "<< endl;
        for(int i=0; i<50;i++)
        {   
            if( Y== 1)
            {
                cin>> deci[i];
                if(deci[i] == 0 )
                {
                    Y=0;
                }
                cout<< round(deci[i])<< endl;
            }   
        }
    


    return 0;
}