#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // In this for loop below we iterate the array from 0 to n-1.
    // and we define to variables (j) & (k) : (j) to track indexes of elements before i and (k) to track
    // elements after i. So using these indexes we compare element at [i] with element at index after (i)
    // and before (i).

    for (int i = 0; i < n - 1; i++)
    {
        int j = i - 1;
        int k = i + 1;
        while (arr[i] > arr[j] && arr[k] > arr[i])
        {


            // in this loop we check is j is at starting idx & is k is at last idx or not.

            if (j == 0 && k == n - 1)
            {
                cout << arr[i];
            }

            // in this loop we check is j is greater than 0 ? if j is greater we decreement j by 1.

            if(j>0)
            {
                j--;
            }

            // in this loop we check is k is smaller than n ? if k is smaller we increement k by 1.

            if(k<n)
            {
                k++;
            }
        }
    }
    cout << -1;
    return 0;
}