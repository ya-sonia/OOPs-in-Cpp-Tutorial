//Inheritance--> The capability  of a class to derive properties and characteristics from another class is called inheritance.

// single inheritance--> one super class and one sub class and sub class directly access property of superclass.

#include<iostream>
using namespace std;
class A{
    public:
    void display()
    {
        cout<<"super class"<<endl;

    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"sub class"<<endl;

    }
};
int main()
{
    B obj;
    obj.display();
    obj.show();
    return 0;
}