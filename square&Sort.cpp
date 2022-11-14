#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// *Two pointer Approach //

// todo- 1. In this approach we traverse the given array using two ptr as index. We traverse the array  from the beiginning idx and ending idx to get our expected answer.

// todo- 2. In this problem we are given a sorted array in ascending order but numbers in array can be both positive and negative also so. As we can see array is sorted in non-decreasing order, so the greatest absolute value can be at the ending idx or the starting idx.

// todo- 3. So we take 2 pointers i&j , i pointing to the starting idx of array and j pointing to the last idx of array. So we traverse from both side using ptrs i&j and we compare the elements at idx at i&j if absolute value of element at i < element at j we insert the greater value into our answer array. So at the end we get a decreasing ordered array.

// todo- 4. Now we can reverse the answer array and return our expected array.

void sortSquared(vector<int> &v)
{
    int left_ptr=0;
    int right_ptr=v.size()-1;
    vector<int> ans;

    while(left_ptr<=right_ptr)
    {
        if(abs(v[left_ptr])<abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        } else {
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    
    reverse(ans.begin(),ans.end());

    for(int ele:ans)
    {
        cout<<ele<<" ";
    }  cout<<endl;
}

int main ()
{

    int n;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++) 
    {
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sortSquared(v);

    return 0;
}