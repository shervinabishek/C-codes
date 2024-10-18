#include<iostream>
using namespace std;
int main ()
{
    string city,country;
    cout<<"Enter the country name ";
    //cin>>country;
    cout<<endl;
    getline(cin,city);
    cout<<"Enter the city ";
    cin>>city;

    cout<<"You live in "<<city<<", "<<country;
    return 0;
}
