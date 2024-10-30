// Manipulators = which helps in data display formatting

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=3, b=78, c=5678;
    cout<<"the value of a  without setw is:"<<a<<endl;
    cout<<"the value of b without setw is:"<<b<<endl;
    cout<<"the value of c  without setw is:"<<c<<endl;

    cout<<"the value of a is :" <<setw(4)<<a<<endl;
     cout<<"the value of b is :"<<setw(4)<<b<<endl;
     cout<<"the value of c is :"<<setw(4)<<c<<endl;
}