#include <iostream>

using namespace std;

void confronto(int* ptrA, int* ptrB){
  if(*ptrA > *ptrB ){

    int C = *ptrA;
    *ptrA = *ptrB;
    *ptrB = C;


  }  

}


int main(){
    int A, B;
    int* ptr_A = &A;
    int* ptr_B = &B;
    cout << "inserire i valori: "<< endl;
    cin >> A;
    cin >> B;
    cout << "A:"<< A << "    "<<"B:"<< B << endl;
    confronto(ptr_A, ptr_B);
    cout << "A:"<< A << "    "<<"B:"<< B << endl;



    return 0;
}