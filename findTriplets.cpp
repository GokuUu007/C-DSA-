#include<iostream>
#include<algorithm>
using namespace std;

// * To solve this triplet sum problem we will use the same approach as two sum but in this problem we have 3 numbers so we need an extra loop.

// todo- 1. We create a for loop from 0 to n-1(size of vector -1) and inside this for loop we will follow the same two sum approach but not from the first index we will start two sum from index next to the starting index. 
// todo- 2. So after every iteration of for and while loop we will get 3 differet nums and now we can check is the sum of these 3 no = x or not and increase the sum count by 1.


int main ()
{

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    int x; 
    cin>>x;
    sort(a, a+n);        

    int ans =0;

    for(int i=0; i<n; i++)
    {
        int left_ptr=i+1;
        int right_ptr=n-1;

        while(left_ptr<right_ptr)
        {
            if(a[i]+a[left_ptr]+a[right_ptr]==x) 
            {
                ans++;
                break;
            } 
            else if(a[i]+a[left_ptr]+a[right_ptr]<x) 
            {
                left_ptr++;
            } else {
                right_ptr--;
            }
            if(ans>0) 
            {
                break;
            }
        }
    }

    cout<<ans;

    return 0;
}