#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Inserire una stringa senza spazi: ";
    cin >> input;

    int n = input.length();
    int maxLength = 0;
    int charIndex[256] = { -1 };

    int i = 0, j = 0;

    while (j < n)
    {
        if (charIndex[input[j]] == -1 || charIndex[input[j]] < i)
        {
            charIndex[input[j]] = j;
            maxLength = max(maxLength, j - i + 1);
            j++;
        }
        else
        {
            i = charIndex[input[j]] + 1;
        }
    }

    cout << "La lunghezza della sottostringa più lunga senza caratteri ripetuti è: " << maxLength << endl;

    return 0;
}
