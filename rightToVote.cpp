#include <iostream>
using namespace std;

void rightToVote(int age)
{
    bool vote = true;
    if(age< 18) {
    vote = false;
    cout<< "Not eligble to vote !"<<endl;
    } else {
        cout<<"Eligble to vote !"<<endl;
    }
}

int main()
{
    int age;
    cout<<"Enter age : ";
    cin>>age;

    rightToVote(age);

    return 0;
}