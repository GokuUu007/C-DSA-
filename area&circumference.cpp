#include <iostream>
using namespace std;

void printCircumArea(float radius)
{
    float pi = 3.14;
    cout << "Area : " << pi * radius * radius << endl;
    cout << "Cirumference : " << 2 * pi * radius << endl;
}

int main()
{
    float radius;
    cout << "Enter radius : ";
    cin >> radius;

    printCircumArea(radius);

    return 0;
}