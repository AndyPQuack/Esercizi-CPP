#include <iostream>
using namespace std;
int main()
{   
    int a,b;
    cout<< "inserire numeri: "<< endl;
    cin>> a;
    cin>> b;
    if(a==b) 
        cout<< "uguali"<<endl;
    if(a>b) 
        cout<< a <<  "is larger"<< endl;
    else
        cout << b<< "is larger" << endl;

    return 0;
}