#include<iostream>
using namespace std;

int main () {
    int SellingPrice;
    cout<<"Enter Selling price : ";
    cin>>SellingPrice;
    int CostPrice;
    cout<<"Enter Cost Price : ";
    cin>>CostPrice;
    if (SellingPrice < CostPrice)
    {
        cout<<"Loss : "<<CostPrice-SellingPrice<<'$'<<endl;
    } else if(SellingPrice>CostPrice) {
        cout<<"Profit : "<<SellingPrice-CostPrice<<' $'<<endl;
    } else {
        cout<<"Neither Profit nor Loss"<<endl;
    }
    return 0;
}