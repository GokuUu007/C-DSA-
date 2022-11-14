#include<iostream>
using namespace std;

int main () 
{
    cout<<"Enter a 3 digit Number : ";
    int n, First, Second, Third;
    cin>>n;
    First = n/100;
    n = n%100;
    Second = n/10;
    n = n%10;
    Third = n/1;
    n = n%1;

    cout<<"The sum of the 3 digits in Number : "<<First+Second+Third<<endl;

    return 0;
    
}