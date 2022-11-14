#include<iostream>
using namespace std;

int main ( )
{

    float n1, n2;
    cout << "input 2 numbers :";
    cin >> n1 >> n2;
    char op;
    cout << "input an operator :";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1+n2;
        break;

    case '-':
        cout << n1-n2;
        break;

    case '*':
        cout << n1*n2;
        break;

    case '/':
        cout << n1/n2;
        break;

    default :
        cout << "invalid operator";
        break;
    }

    return 0;
}