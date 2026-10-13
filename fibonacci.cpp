#include <iostream>
using namespace std;
int fibonacci(int x)
{   
    int res;
    int a = 1;
    int b = 1;
    for(int j=2; j < x;j++)
    {
        res = a+b;
        a =b ;
        b = res;

    }
    return res;

}
int main()
{   
    int i;
    cout<< "scegliere fino a dove calcolare la serie: ";
    cin>> i;
    cout<< " l iesimo elemento: " << fibonacci(i);
}