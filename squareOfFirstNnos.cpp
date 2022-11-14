#include <iostream>
#include <cmath>
using namespace std;

void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout <<"Square of "<<i<<" = "<< pow(i, 2)<<endl;
    }
}

int main()
{
    int n;
    cout << "Enter a no : ";
    cin >> n;
    printSquare(n);
    return 0;
}