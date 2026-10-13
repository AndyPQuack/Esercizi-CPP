#include <iostream>
#include <string>

class Conto{

private:
    std::string name;
    double saldo;
public:
Conto(std::string n, double s){
    name = n;
    saldo = s;
}

void accredito(double importo){
    saldo= saldo + importo;
    std::cout<< "dapositati: "<< importo<< std::endl;
}

void addebito(double importo){
    if(saldo >= importo){
        saldo = saldo - importo;
        std::cout<< "Pagamento effettuato, ammontare del saldo: "<< saldo<< std::endl;

    }
    else{    std::cout<< "Fondi insufficenti: "<< saldo<< std::endl;
}
}

void generalità(){
    std::cout<< "intestatario: "<< name<< std::endl;
    std::cout<< "Saldo disponibile: "<< saldo<< std::endl;


}
};


int main(){

Conto contopersonale("Igor Miti", 140);

contopersonale.generalità();

contopersonale.addebito(200);

    return 0;
}