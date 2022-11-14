#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a Decimal no : ";
    cin >> n;
    int ans = 0;
    int power = 1;

    while (n > 0)
    {
        int pairitydigit = n % 2;
        ans += pairitydigit * power;
        power *= 10;
        n /= 2;
    }

    cout << ans << endl;

    return 0;
}