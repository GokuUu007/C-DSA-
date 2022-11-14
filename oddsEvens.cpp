#include <iostream>
using namespace std;

int main()
{

    int n, even=0, odds=0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        if(arr[i]%2==0) {
            even++;
        } else {
            odds++;
        }
    }

    cout<<"Even no : "<<even<<endl;
    cout<<"Odd no : "<<odds<<endl;


        return 0;
}