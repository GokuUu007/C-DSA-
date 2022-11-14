#include<iostream>
using namespace std;


void printOdds(int i, int n ) 
{
    bool even = true;
    for(int i=1; i<=n; i++) 
    {
        if(i%2==0) {
            continue;
        } else {
            cout<<i<<" ";
        }
    }
}


int main ()
{

    int i, n;
    cout<<"Enter range : ";
    cin>>i>>n;

    printOdds(i, n);

    return 0;
}