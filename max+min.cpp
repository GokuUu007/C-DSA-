#include <iostream>
#include <limits.h>
using namespace std;


// 1.
// Using max_element function
// in this function we get the largest & smallest element's address in a given range  
// and using pointer we get the stored value, and then we can calculate their sum.

int sum(int arr[], int n)
{
    int *max;
    int *min;
    for (int i = 0; i < n; i++)
    {
        max = max_element(arr, arr + n);
        min = min_element(arr, arr + n);
    }

    int ans = *max + *min;
    return ans;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = sum(arr, n);
    cout << ans;

    return 0;
}

// 2.

// this is sort function so in this algorithm we can sort an array
// in ascending and the we can print the sum of the element at first index
// and the element at the last index as first element
// will be the smallest and last being the largest.

for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - i - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            // swap 
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

cout<<arr[0]+arr[n-1]<<endl;

// 3.

// in this function we use the limts.h header file to find the largest and the smallest element in an array 
// and the we can add the max and min number.

int sum(int arr[], int n)
{
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        max_val = max(max_val, arr[i]);
        min_val = min(min_val, arr[i]);
    }

    int ans = min_val + max_val;
    return ans;
}