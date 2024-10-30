//copy constructor--> a copy constructor is an overloaded constructor used to declare and initialize an object from another object.


#include<iostream>
using namespace std;
class A{
    public:
    int x;
    A(int a) //  parameterized constructor
    { x=a;}

    A( A & z)  //  copy constructor, here z is old object
    { x=z.x ;}

};

int main()
{
    A obj1(10);  // calling  parameterized constructor
    A obj2(obj1); // calling copy constructor
    cout<<obj2.x;
    return 0;
}