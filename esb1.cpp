#include <iostream>
using namespace std;
int main()
{   
    int x,y;
    cout<< "inserire numeri: " << endl;
    cin>> x;
    cin>> y;
    int a=1;
    int b=1;
    int i=0;
    while(i<y)
    {
        i++;
        a*=x;

    }
    cout<< "primo"<< a <<endl;
    for(int j=0; j<y; j++)
    {
        b*=x;
    }
    cout<< "secondo"<< b<<endl;
    return 0;
}