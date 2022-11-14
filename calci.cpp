#include<iostream>
using namespace std;

int main ()
{
    float a, b, Sum, Difference, Division, Product, Remainder;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    Sum = a+b;
    Difference = a-b;
    Product = a*b;
    Division = a/b;

    cout<<"Sum : "<<Sum<<endl;
    cout<<"Difference : "<<Difference<<endl;
    cout<<"Product : "<<Product<<endl;
    cout<<"Division : "<<Division<<endl;

    return 0;
}