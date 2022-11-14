#include<iostream>
using namespace std;
int main () {
    int x;
    cout<<"Enter no :";
    cin>>x;
    int n;
    cout<<"Enter power :";
    cin>>n;
    int power=1;
    for(int i=1; i<=n;i++) {
        power=x*power;
    }
    cout<<x<<" raise to the power "<<n<<" is : "<<power;
    return 0;
}