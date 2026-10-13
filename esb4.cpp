#include <iostream>
using namespace std;
int pow(int x, int y)
{
    int a=1;
    int i=0;
    while(i<y)
    {
        i++;
        a*=x;
    }
    return a;
}
int main()
{   
    int i=2;
    while(i>0)
    {
        if(i%2==0)
        {
            cout<< i << endl;
        }
        
        
        i++;
    }
    return 0;
}
