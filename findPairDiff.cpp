#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int count = 0;
    int a[n];

    for (int c = 0; c < n; c++)
    {
        cin >> a[c];
    }

    int x;
    cin >> x;

    for (int i = n - 1; i >= 0; i--)
    {
        if (count == -1)
        {
            break;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] - a[j] == x)
            {
                count = -1;
            }
            else
            {
                count = 1;
            }
        }
    }
    if (count > -1)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}

// * other way


// int m;
// cin >> m;
// int a[m];

// for (int c = 0; c < m; c++)
// {
//     cin >> a[c];
// }

// int n;
// cin >> n;

// int i = 0;

// int j = 1;

// while (i < m && j < m)

// {

//     if ((a[j] - a[i]) == (n))

//     {

//         cout << "Yes";
//     }
//     else if ((a[j] - a[i]) < (n))

//     {

//         j++;
//     }
//     else
//     {

//         i++;
//     }
// }

// cout << "No";