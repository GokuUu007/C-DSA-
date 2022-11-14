#include <iostream>
using namespace std;

int main()
{
    int n, temp, lastdigit, sum = 0;
    cout << "enter a no :";
    cin >> n;


    //this loop will take n modulo with 10 till it becomes 0
    //and every time the loop runs last digit of entered no will be stored in lastdigit,
    //and it will be printed.
    while (n != 0)
    {
        temp=n;
        lastdigit=temp%10;
        n=n/10;
        cout<<lastdigit;

    }
}