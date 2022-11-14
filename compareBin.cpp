#include <iostream>
using namespace std;

int main()
{

    int n, m, ans1 = 0, power1 = 1, ans2 = 0, power2 = 1;
    cout << "Enter 1st Binary no : ";
    cin >> n;
    cout << "Enter 2nd Binary no : ";
    cin >> m;

    while (n > 0)
    {
        int lastdigit = n % 10;
        ans1 += lastdigit * power1;
        power1 *= 2;
        n /= 10;
    }

    while (m > 0)
    {
        int lastdigit = m % 10;
        ans2 += lastdigit * power2;
        power2 *= 2;
        m /= 10;
    }

    if (ans1 < ans2)
    {
        cout << ans2 << " is greater than " << ans1 << endl;
    }
    else
    {
        cout<<ans1<<" is greater than "<<ans2<<endl;
    }

    return 0;
}