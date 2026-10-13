#include <iostream>
using namespace std;

int dieci_alla(int x, int y)
{
    int a=1;
    int i=0;
    while(i<y)
    {
        i++;
        a*=x;
    }
    return a;
}
int splitter(int x, int y)
{
    int cifra;
    cifra= x/dieci_alla(10,y)%10;

    return cifra;
}
int main()
{   
    
    int N=0;
    int num;
    cout<< "inserire numero: "<<endl;
    cin>> num;
    while(num> dieci_alla(10,N))
    {
        N++;
    }
    cout<< N << endl;

    bool Y=0;
    cout<< N/2 << endl;

    for(int i=0; i< N/2; i++)
    {   

        if(splitter(num,i) == splitter(num, N-i-1))
        {
            Y = 1;
        }
        else
        {
            cout<<"non palindromo"<< endl;
            i= N/2;
            Y=0;
        }
        cout<< splitter(num,i)<< "        "<< splitter(num, N-i-1)<< endl;
    }

    if(Y == 1)
    {
        cout<< "palindromo"<<endl;
    }
    

    
    return 0;
}