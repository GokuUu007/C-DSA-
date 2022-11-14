#include<iostream>
using namespace std;

int main ()
{
    int number, factorial;
    factorial=1;
    cout<<"Enter number : ";
    cin>>number;

    for (int i=number; i>=1; i--)
    {
        factorial= factorial*i;
    }
    cout<<factorial;

    return 0;
}