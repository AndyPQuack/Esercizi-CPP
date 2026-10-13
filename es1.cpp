#include <iostream>
using namespace std;


int main(){


    int x=2;
    int &y=x;
    x -= 1;
    y *= 5;
    cout<< x;




    return 0;
}
