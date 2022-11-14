#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    // Rotating array using vector.
    
    vector<int>v;
    int n;
    cin>>n;
    int element;
    for(int i=0; i<n; i++)
    {
        cin>>element;
        v.push_back(element);
    }


    int k;
    cin>>k;
    k=k%v.size();

    reverse(v.begin(), v.end());
    reverse(v.begin()+k, v.end());
    reverse(v.begin(), v.begin()+k);

    for(int a:v)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;
}

    // Rotating array using extra array.

    int n, k;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cin >> k;
    k = k % n;

    int ansarray[n];
    int j = 0;

    for (int i = n-k; i < n; i++)
    {
        ansarray[j++] = array[i];
    }

    for(int i=0; i<=k; i++) 
    {
        ansarray[j++] = array[i];
    }

    for(int i=0; i<n; i++) 
    {
        cout<<ansarray[i];
    }