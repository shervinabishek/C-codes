#include<iostream>
using namespace std;
int main ()
{
    string city,country;
    cout<<"Enter your country: ";
    cin>>country;
    cin.ignore();


    cout<<endl;

    cout<<"Enter Your city: ";
    getline (cin,city);

    cout<<"You live in "<<city<<", "<<country;
    return 0;
}
