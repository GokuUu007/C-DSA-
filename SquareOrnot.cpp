#include<iostream>
using namespace std;

int main () 
{
    int Length, Breadth;
    cout<<"Enter Length and Breadth : ";
    cin>>Length>>Breadth;
    if (Length == Breadth)
    {
        cout<<"It is a Square."<<endl;
    } else 
    {
        cout<<"It is a Rectangle."<<endl;
    }
    return 0;
    
}