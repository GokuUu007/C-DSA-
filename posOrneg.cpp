#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if (n<1)
    {
        cout<<"The number is negative and skipped."<<endl;
    } else{
        cout<<n;
    }
    
    return 0;
}