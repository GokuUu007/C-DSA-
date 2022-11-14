#include <iostream>
using namespace std;

int findPairs(int arr[], int n, int sum)
{
    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                pairs++;
            }
        }
    }
    return pairs;
}

int findTriplets(int arr[], int n, int sum)
{
    int triplets = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    triplets++;
                }
            }
        }
    }
    return triplets;
}

int main()
{

    int n, sum;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> sum;

    int pair = findPairs(arr, n, sum);
    int triples = findTriplets(arr, n, sum);
    cout << pair<<endl;
    cout << triples<<endl;

    return 0;
}