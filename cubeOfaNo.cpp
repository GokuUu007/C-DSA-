#include<iostream>
using namespace std;

int main () {

    cout<<"Enter a number : ";
    int num;
    cin>>num;
    int power = 3;
    int sum = 1;
    for (int i=1; i<=power; i++)
    {
        sum = sum*num;
    }
    cout<<num<<" cube is = "<<sum<<endl;
    
    return 0;
}