#include <iostream>
using namespace std;

int main()
{
    int rows;
    char c;
    cout << "enter rows  : ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        c = 65;
        for (int j = i; j <= rows; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
    for (int i = rows-1; i >=1; i--)
    {
        c = 65;
        for (int j = i; j <= rows; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }

    return 0;
}