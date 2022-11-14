#include <iostream>
using namespace std;

int main()
{

    int n, m, c, rem, sum, p = 1, i, temp;
    cout<<"Enter starting num : ";
    cin >> n;
    cout<<"Enter ending num : ";
    cin >> m;
    c = 0;
    sum = 0;

    while (n <= m)
    {
        c = 0;
        sum = 0;
        temp = n;
        while (temp != 0)
        {
            c += 1;
            temp = temp / 10;
        }
        temp = n;
        while (temp != 0)
        {
            rem = temp % 10;
            p = 1;
            for (int i = 1; i <= c; i++)
            {
                p *= rem;
            }
            sum = sum + p;
            temp = temp / 10;
        }
        if (sum == n)
            cout << n << endl;
        n++;
    }

    return 0;
}