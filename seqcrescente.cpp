#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    const int dim = 100;
    double valori[dim] = {};
    int len_eff = 0;
    cout<< "inserire valori positivi: "<< endl;
    for(int i=0; i<dim; i++)
    {
        cin>> valori[i];
        if(valori[i] < 0)
        {
            i = dim+1;
        }
        else{len_eff++;}
    }
    //cout<< len_eff;
    int counter=0;
    int counter_temp =0;
    int indice;
    for(int j=0; j< len_eff; j++)
    {   
        if(valori[j+1]> valori[j])
        {
            counter_temp++;
        }
        else
        {
            if(counter_temp > counter)
            {
                counter= counter_temp;
                indice =j;

            }
            counter_temp=0;

        }
    }
    cout<< "la sequenza crescente: "<< endl;
    while(counter >= 0)
    {
        cout<< valori[indice-counter]<< " ";
        counter--;
    }


    return 0;
}