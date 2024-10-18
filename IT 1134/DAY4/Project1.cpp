#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b, power, SquareA, SquareB;
	cout<<"Enter Any number as input 1: ";
	cin>>a;
	cout<<"Enter Any number as input 2: ";
	cin>>b;

	power=pow(a,b);
	cout<<"power of the number is: ";
	cout<<power<<endl;

	SquareA=sqrt(a);
	SquareB=sqrt(b);

	cout<<"Square of the number 1: ";
	cout<<SquareA<<endl;
	cout<<"Square of the number 2: ";
	cout<<SquareB<<endl;
	return 0;

}
