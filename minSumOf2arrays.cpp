#include<iostream>
using namespace std;

void sort(int arr[], int n) {
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
}


int main () 
{

    int n;
    cin>>n;
    int arr[n];
    int arr2[n];


    // taking fist array  of size n
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort(arr ,n);
    
    // taking second array of same size n

    for(int i=0; i<n; i++) {
        cin>>arr2[i];
    }

    sort(arr2, n);

    cout<<"The minimum possible sum : "<<arr[0]+arr2[0]<<endl;


    return 0;
}