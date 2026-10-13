#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{   const int len =101;
    char seq[len];
    cout<< "inserire sequenza: "<< endl;
    cin.getline(seq, len);
    for (int i =0; i < strlen(seq);)    //incrementa la i all' interno per non saltare conteggi.
    {   
        int counter =1;
        int j=0;
        while( seq[i+j]== seq[i+j+1])
        {
            counter +=1;
            j++;
        }
        cout<< seq[i]<< counter;
        i+= counter;


    }

    


    return 0;
}