#include <iostream>
#include <string>

using namespace std;

class Eroe{

private:
    string name;
    int hp;
    int energy;
public:

Eroe(string n){
    name = n;
    hp = 100;
    energy = 50;
}

void Danno(int valore){

    hp = hp-valore;
    if(hp <= 0) cout<< "L' eroe e' morto."<< endl;
}

void AttaccoSp(){
    if(energy >= 15){
        energy = energy -15;
        cout << "Attacco speciale lanciato!"<< endl;
    }else{
        cout << "Non hai energia!"<< endl;
    }
}

void cura(){
    hp = hp+20;
    cout<< "Cura effettuata."<< endl;
}

void condizioni(){
    cout << "Nome:" << name << endl;
    cout << "Punti vita:" << hp << endl;
    cout << "Energia:" << energy << endl;
}

};


int main(){

Eroe Eroe1("Rayman");

Eroe1.Danno(60);
Eroe1.condizioni();
Eroe1.cura();
Eroe1.Danno(80);
Eroe Eroe2("Goku");

Eroe2.condizioni();


    return 0;
}