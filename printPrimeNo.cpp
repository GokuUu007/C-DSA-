#include <iostream>
using namespace std;

void printOdds(int i, int n)
{
    while (i <= n)
    {
        int count = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " ";
        }
        i++;
    }
}

int main()
{

    int i, n;
    cout << "Enter range : ";
    cin >> i >> n;

    printOdds(i, n);

    return 0;
}