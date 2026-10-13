#include <iostream>
using namespace std;

int main()
{   
    int N_stu;
    cout<< "inserire numero studenti: "<< endl;
    cin>> N_stu;
    double voti[N_stu];
    double somma=0;
    cout<< "inserire voti ( fino a 30L): "<< endl;
    for( int i=0; i<N_stu; i++)
    {
        cin>> voti[i];
        somma+= voti[i];
    }
    cout<< somma/N_stu<< endl;
    return 0;
}
