#include<iostream>
using namespace std;
int main ()
{
   string fname, lname;
   cout<<"Enter the first name: ";
   getline(cin, fname);
   cout<<"Enter the last name: ";
   getline (cin, lname);

   //string full_name=fname+" "+lname;
   string fullname=fname.append(" "+lname);
   //cout<<"Full Name is: "<< full_name;
   cout<<fullname;



    return 0;
}
