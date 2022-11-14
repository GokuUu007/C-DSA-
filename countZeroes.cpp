#include <iostream>
using namespace std;

int main()
{

    int n, ans = 0, count = 0, power = 1;
    cout << "Enter a decimal no : ";
    cin >> n;
    int no=n;

    // 1. converting  decimal no  into binary :

    while (n > 0)
    {
        int pairitydigit = n % 2;
        ans += pairitydigit * power;
        power *= 10;
        n /= 2;
    }

    // 2. counting no of zeroes :

    while (ans > 0)
    {
        int lastdigit = ans % 10;
        if (lastdigit == 0)
        {
            count++;
        }
        ans /= 10;
    }
    cout <<"No of zeroes in binary form of "<<no<<" = "<< count << endl;

    return 0;
}