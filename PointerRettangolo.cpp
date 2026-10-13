#include <iostream>
using namespace std;
void Dimensioni(int base, int altezza, int* ptr_area, int* ptr_perimetro){
*ptr_area = base * altezza;
*ptr_perimetro = (base+altezza)*2;
}
int main() {
int b, h;
int area;
int perimetro;
cout << "fornire base e altezza: " << endl;
cin >> b;
cin >> h;

Dimensioni(b,h, &area, &perimetro);

cout<< "Area: "<< area << endl;
cout<< "Perimetro: "<< perimetro << endl;





    return 0;
}