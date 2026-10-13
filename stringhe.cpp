#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int converter(char x)
{
    int a = int(x) - int('0');

    return a;
}

int main()
{
    char codice[5];
    cout<< "inserire codice: "<< endl;
    cin.getline(codice, 5);
    for(int i=0; i < strlen(codice)-1; i++)
    {
        cout<< converter(codice[i]);
    }
    
    







}