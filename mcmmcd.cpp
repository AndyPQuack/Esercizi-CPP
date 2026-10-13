#include <iostream>
using namespace std;
int MCM(int x, int y)
{   
    if(y > x)
    {
        int temp = x;
        x = y;
        x = temp;
    }
    int res;
    bool verifica = true;
    int i =0;
    while(verifica)
    {
        if((i+x)%y ==0)
        {   
            res = i+x;
            verifica = false;

        }
        i +=x;
    }
    return res;

}
int mcd(int x, int y)
{
    if(y < x)
    {
        int temp = x;
        x = y;
        x = temp;
    }
    int res;
    for( int i = 1; i <= x/2; i++ )
    {
        if (x%i ==0 && y%i == 0)
        {
            res = i;
        }
    }
    return res;

}
int main()
{   
    int i;
    int b;
    cout<< "scegliere numeri: "<< endl;
    cin>> i;
    cin >> b;
    cout<< "MCM: "<< MCM(i,b)<< endl;
    cout<<"mcd: "<< mcd(i,b)<< endl;
    
}