#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int no[n];
    int max=no[0];

    for(int i=0; i<n; i++) {
        cin>>no[i];
    }

    for(int i=0; i<n-1; i++) {
        if(no[i]>max) {
            max = no[i];
        }
    }
    cout<<max;
    return 0;
}