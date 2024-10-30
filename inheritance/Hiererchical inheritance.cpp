// Hierarchical inheritance--> more than one class is inherited from a single base class.
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
    void display1()
    {
        cout<<"sub class display1"<<endl;

    }
};
class C:public A
{
    public:
    void display2()
    {
        cout<<"sub class display2"<<endl;

    }
};
int main()
{
    C obj;
    obj.display();
    obj.display2();

    B obj2;
    obj2.display();
    obj2.display1();
    return 0;
}