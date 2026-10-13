#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char frase[101];
    cout<< "inserire frase: "<< endl;
    cin.getline(frase, 101);
    for(int i = 0; i <= strlen(frase); i++)
    {
        cout<< frase[strlen(frase)-i];
    }
    
    


    return 0;
}