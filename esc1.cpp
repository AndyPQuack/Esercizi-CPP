#include <iostream>
using namespace std;
int main()
{   
    int num[10];
    cout<<"inserire valori: "<< endl;
    for(int i=0; i<10; i++)
    {
        cin>> num[i];
    }
    int sum[10]= {};
    int somme = num[0];
    for(int j=1 ; j<10; j++)
    {   
        somme += num[j];
        sum[j] = somme;   
    }
    sum[0]= num[0];
    for(int s=0; s<10;s++)
    {
        cout<< num[s] << "         "<< sum[s]<< endl;
    }

    return 0;
}
