#include<iostream>
using namespace std;

int main ()
{
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;


    if (marks>90 && marks<=100)
    {
        cout<<"A+"<<endl;
    } else if (marks<90 && marks>=80)
    {
        cout<<"A"<<endl;
    } else if(marks<80 && marks>=70) {
        cout<<"B+"<<endl;
    } else if (marks<70 && marks>=60)
    {
        cout<<"B"<<endl;
    } else if (marks<60 && marks>=50)
    {
        cout<<"C"<<endl;
    } else if (marks<50 && marks>=40)
    {
        cout<<"D"<<endl;
    } else if (marks<40 && marks>=30)
    {
        cout<<"E"<<endl;
    } else if (marks<30 && marks>=0)
    {
        cout<<"Failed"<<endl;
    } else {
        cout<<"Invalid";
    }
    
    return 0;   
}