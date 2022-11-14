#include<iostream>
using namespace std;

int main () {
    cout<<"Press a button";
    char button;
    cin>>button;
    switch (button)
    {
    case '1' :
        cout<<"Hello";
        break;
    case '2' :
        cout<<"Bonjour";
        break;
    case '3' :
        cout<<"Konnichiwa";
        break;
    case '4' :
        cout<<"Namaste";
        break;
    default:
    cout<<"invalid button";
        break;
    }
    return 0;
}