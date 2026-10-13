#include <iostream>
using namespace std;
int fact(int x)
{

    int a=1;
    int b=1;
    int i=0;

    for(int j=0; j<x; j++)
    {   
        int n;
        n= x-j;
        
        b*=n;
    }
    return b;
}
int main()
{ 
    int N;
     int fat;
    cout << "fornire numero non negativo: "<< endl;
    cin >> N;
    if( N<0)
    {
        cout<< "N è nagativo non vabene";
    }
    else
    {   
        fat = fact(N);
    }  
    cout<< "il fattoriale è:"<< fat << endl; 
    return 0;
}