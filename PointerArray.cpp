#include <iostream>
using namespace std;

void MinMax(int* array, int* min , int* max, int dimensione ){
*min = array[0];
*max = array[0];

for(int i=0; i < dimensione; i++ ){
    if(array[i] <= *min){
        *min = array[i];
    };
    if(array[i] >= *max){
        *max = array[i];
    };
};
};

int main(){
int dimensione;
int Min, Max;
int* ptr_min = &Min;
int* ptr_max = &Max;

cout << "quanti numeri vuoi inserire?" << endl;
cin >> dimensione;
int* array = new int[dimensione];
int a;
cout<< "fornire i valori: "<< endl;
for(int i=0; i < dimensione; i++ ){
    cin>> a;
    array[i] = a;
}

MinMax(array, ptr_min, ptr_max, dimensione);

cout<< "MIN: " << *ptr_min << endl;
cout<< "MAX: "<< *ptr_max << endl;

    return 0;
}