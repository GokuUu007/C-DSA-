#include <iostream>
using namespace std;

int main()
{

               // basic idea to find the missing number ??


    // To find missing no we using sum of n numbers as orginal sum.
    // coz if we calculate the sum of those numbers that should be present.
    // if we subtract sum of numbers input by the user from original sum we get the missing no
    // as there is only one number missing in the array.

    int n, sum = 0, sum_org=0;
    cout << "Enter range :  ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // in this for loop we calculate sum of n numbers

    for (int i = 0; i <= n; i++)
    {
        sum_org+=i;
    }

    // in this loop we calculate sum of numbers input by  the user

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout<<sum_org-sum;

    return 0;
}