#include <iostream>
#include <cstring>
using namespace std;

// Legge l'n-esima (n=posizione_parola) parola dalla frase specificata e la copia dentro la stringa "parola".
// Restituisce la lunghezza della parola letta.
void leggi_parola_numero(char frase[], int n_frase, char parola[], int posizione_parola)
{
    int contatore_parole = 0, j=0;
    for(int i=0; i<n_frase; i++){
        if(frase[i]==' '){
            // quando trovo uno spazio incremento il contatore delle parole
            contatore_parole++;
            i++; // incremento i per evitare che lo spazio venga copiato in "parola"
        }
        if(contatore_parole==posizione_parola){
            parola[j] = frase[i];
            j++;
        }
        else if(contatore_parole>posizione_parola)
            i = n_frase; // esco dal ciclo for
    }
    parola[j] = '\0';
}

// Ristampare le parole di una frase seguendo l'ordine specificato
int main()
{
    int x[100], n=-1;
    do{
        n++;
        cin>>x[n];
    }
    while(x[n]>=0 && n<100);

    char frase_temp[101];
    cin.getline(frase_temp, 100);
    char *frase = frase_temp+1; // questa istruzione serve per togliere lo spazio a inizio frase
    int n_frase = strlen(frase);
    // cout<<"Frase letta: |"<<frase<<"|"<<endl;

    char parola[100]; // parola della frase
    for(int i=0; i<n; i++){
        leggi_parola_numero(frase, n_frase, parola, x[i]);
        cout<<parola<<" ";
    }
    cout<<endl;
    return 0;
}