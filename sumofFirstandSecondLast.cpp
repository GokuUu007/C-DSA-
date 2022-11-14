#include<iostream>
using namespace std;

int main () 
{
    int n, first, second, third, fourth; 
    cout<<"Enter a 5 Digit Num : ";
    cin>>n;
    first = n/10000;
    n = n%10000;
    second = n/1000;
    n = n%1000;
    third = n/100;
    n = n%100;
    fourth = n/10;
    n= n%10;
    cout<<first+fourth<<endl;

    return 0;
}