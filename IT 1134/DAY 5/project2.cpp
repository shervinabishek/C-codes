#include<iostream>
using namespace std;
int main()
{

    int hours, minutes, seconds;
    cout<<"Enter the time - Hours: ";
    cin>>hours;
    cout<<endl;

    cout<<"Enter the - Minutes: ";
    cin>>minutes;
    cout<<endl;

    cout<<"Enter the - seconds: ";
    cin>>seconds;
    cout<<endl;

    cout<<"Total seconds: "<<(hours*3600)+(minutes*60)+seconds<<endl;




    return 0;

}

