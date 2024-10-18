#include<iostream>
using namespace std;
int main ()
{
    double principal,rate, roi, time;
    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<endl;

    cout<<"Enter the rate of interest: ";
    cin>>rate;
    cout<<endl;

    cout<<"Enter the time of period in years: ";
    cin>>time;
    cout<<endl;

    cout<<"The simple interest is: "<<(principal*rate*time)/100<<endl;
    cout<<"The compound interest is: "<<principal*(1+rate/100)*time-principal<<endl;

    return 0;
}
