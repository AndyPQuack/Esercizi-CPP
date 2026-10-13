#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

bool isPalindrome(char str[]) {
    int length = strlen(str);
    int i = 0;
    int j = length - 1;

    while (i < j) {
        // Ignora spazi e caratteri non alfabetici
        while (i < length && !isalpha(str[i])) {
            i++;
        }
        while (j >= 0 && !isalpha(str[j])) {
            j--;
        }

        // Confronta i caratteri ignorando maiuscole/minuscole
        if (i < length && j >= 0 && tolower(str[i]) != tolower(str[j])) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main() {
    const int maxSize = 100;
    char input[maxSize];

    cout << "Inserisci una frase (massimo 100 caratteri): ";
    cin.getline(input, maxSize);

    if (isPalindrome(input)) {
        cout << "La frase e' palindroma." << endl;
    } else {
        cout << "La frase non e' palindroma." << endl;
    }

    return 0;
}