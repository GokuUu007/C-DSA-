#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // * BASIC IDEA OF THIS CODE * //

    // todo 1. So we create 2 ptrs i & j for each sorted array

    // todo 2. Using ptrs we compare elements of both array if element at ptr i < j we insert arr[i] in our ans array and increement i , else if j < i we will insert a[j] in our ans array.

    // todo 3. if in case any of the two array size is more than the other we will run another while loop to check i < size of arr1 and j < size of arr2 if any of the condition is true we will insert the rest elements of that respective array in the ans array.

    // todo 4. At the end  we return the ans array.


    int m, n;
    cin >> m;
    int a[m];
    cin >> n;
    int b[n];
    int i = 0;
    int j = 0;
    int k = 0;
    int ans[m + n];

    for (int c = 0; c < m; c++)
    {
        cin >> a[c];
    }

    for (int c = 0; c < n; c++)
    {
        cin >> b[c];
    }

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            ans[k] = a[i];
            i++;
            k++;
        }
        else
        {
            ans[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < m)
    {
        ans[k] = a[i];
        i++;
        k++;
    }
    while (j < n)
    {
        ans[k] = b[j];
        j++;
        k++;
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}