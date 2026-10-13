#include <iostream>
#include <iomanip>
using namespace std;
int dadi(int x, int y)
{
    int B = rand()%x+1;
    int C = rand()%y+1;
    int a = B+C;
    return a;
}
double prob(int x, int y)
{   
    
    double a = ((double)x/(double)y)*100;
    return a;
}
int main()
{   
    int valori[13]={};
    int lanci;
    cout<< "scegliere numero di lanci: "<< endl;
    cin>> lanci;
    int dado1;
    int dado2;
    cout<< " scegliere numero di facce dei dadi: "<< endl;
    cin>> dado1;
    cin>> dado2;
    int i =0;
    while(i < lanci)
    {
        int esito = dadi(dado1, dado2);
        for(int j=2; j<13; j++)
        {
            if(j == esito)
            {
                valori[j] += 1;
            }
        }
        i++;
    }
    for(int k=2; k<13; k++)
    {   

        cout<< setw(8)<< valori[k];
       
    }
    cout<< endl;
    for(int k=2; k<13; k++)
    {
        cout<<setw(8)<< prob(valori[k],lanci)<< "%";
    }

    return 0;
}