#include<iostream>
using namespace std;
int main ()
{
    int C,F;
    cout<<"Temperature in Celcius: ";


    cin>>C;

    C = (9/5*C)+32;

    cout<< "Farenheit value: "<<F<<endl;

   cout<<"Temperature in Farenheit: ";
   cin>>F;
   C=(F-32)*5/9;
   cout<<"Celsius value: "<<C<<endl;

    return 0;
}
