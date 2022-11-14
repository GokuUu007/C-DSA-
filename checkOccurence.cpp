#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout<<"Enter size of vector : ";
    cin >> n;
    int a;
    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        cout<<"Add elements in vector : "<<endl;
        cin >> a;
        v.push_back(a);
    }

    const int N = 1e5 + 10; 
    vector<int> freq(N, 0);

    for(int i=0;i<n; i++)
    {
        freq[v[i]]++;
    }

    cout<<"Enter queries : ";
    int q; cin>>q;

    while(q--)
    {
        int num; cout<<"Enter num : "; cin>>num;
        cout<<num<<" is present in Vector "<<freq[num]<<" times."<<endl;
    }

    return 0;
}