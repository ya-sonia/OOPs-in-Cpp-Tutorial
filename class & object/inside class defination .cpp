// class methods are: inline / inside class defination and outside class defination.
// The member function is defined inside the class defination , it can be defined directly and access by dot operator called inside class defination.
// To define a function outside class defination ,you to declare it inside class then define it outside of class .This is done by specifying the name of the class followed the scope resolution (::) operator and access by  dot operator .




#include<iostream>
using namespace std;
class A{
    public:
    string display()
    {
        
        return" display is call";
    }
};
int main()
{
    A obj;
     obj.display();
    string s=obj.display();
    cout<<s;
    return 0;
}