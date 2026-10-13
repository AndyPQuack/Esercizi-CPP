#include <iostream>
using namespace std;
int dieci_alla(int x, int y)
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
    int num;
    cout<< "inserire numero: "<< endl;
    cin>> num;
    int indice;
    cout<<"inserire indice: "<< endl;
    cin>> indice;
    cout<< num/ dieci_alla(10,indice-1)%10<< endl;


    return 0;
}