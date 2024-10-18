#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double num1, num2;
    cout<<"Enter the input 1: ";
    cin>>num1;
     cout<<"Enter the input 2: ";
    cin>>num2;

    double power= pow(num1, num2);
    cout<<"raised to the power of"<<num2<<" is:"<<power<<endl;

    cout<<"square root of "<<num1<<" is:"<<sqrt (num1)<<endl;
    cout<<"square root of "<<num2<<" is:"<<sqrt(num2)<<endl;
    cout<<"Minimum of two numbr is: "<<min(num1,num2)<<endl;
    cout<<"Maximum of two number is: "<<max(num1,num2)<<endl;
    cout<<"round "<<num1<<" is:"<<round(num1)<<endl;
    cout<<"round "<<num2<<" is:"<<round(num2);

    return 0;
}
