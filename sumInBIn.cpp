#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0, ans = 0, power = 1;
    cout << "Enter no : ";
    cin >> n;

    //Calculating sum :

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    //converting sum into binary :

    while (sum > 0)
    {
        int pairitydigit = sum % 2;
        ans += pairitydigit * power;
        power *= 10;
        sum /= 2;
    }

    //printing sum in binary :

    cout << ans << endl;

    return 0;
}