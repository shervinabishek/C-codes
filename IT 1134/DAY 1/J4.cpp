//Ask the user input their name and age
//the programme should then greet the user with a
//personalized message and display their age
#include<iostream>
using namespace std;
int main ()
{
    string name;
    int age;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Welcome "<<name<<" Your age is "<<age;

    return 0;
}
