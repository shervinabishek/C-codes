#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double radius, height, volume, surfaceArea;
    cout<<"Enter the Radius of the cylinder: ";
    cin>>radius;
    cout<<endl;

    cout<<"Enter the height of the cylinder: ";
    cin>>height;
    cout<<endl;

    volume= M_PI*pow(radius,2)* height;
    surfaceArea=2*M_PI*radius*(radius+height);

    cout<<"The volume of the cylinder is: "<<volume<<endl;
    cout<<"The Surface area of the cylinder is: "<<surfaceArea<<endl;

    return 0;
}
