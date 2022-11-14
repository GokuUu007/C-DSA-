#include <iostream>
#include <vector>
using namespace std;

// [1,2,3,4,6] x=7
// ans == 2;

// * Read this * // 

// todo- 1. So in this problem we are taking two ptrs one pointing to the starting idx and one pointing to the ending idx.
// todo- 2. We traverse from both sides and check whether sum of element at starting idx and ending idx is == x or not, if condition is true we increement i and decreement j and increase the count by 1. If condition is false we increase i by 1.


void Uniquepair(vector<int> &v, int &x)
{
    int i = 0;
    int j = v.size() - 1;
    int count = 0;

    while (i < j)
    {
        if (v[i] + v[j] == x)
        {
            count++;
            i++;
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int x;
    cin >> x;

    Uniquepair(v, x);

    return 0;
}