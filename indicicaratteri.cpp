#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int chartoint(char x)
{
    int a = int(x) - int('0');

    return a;
}
int indice(char x)
{
    char a = tolower(x);
    int b = int(a) - int('a');

    return b;
}

int main()
{
    char carattere;
    char numero;

    cin>> carattere;
    cin>> numero;
    cout<< indice(carattere)<< endl;
    cout<< chartoint(numero);

    






    return 0;
}