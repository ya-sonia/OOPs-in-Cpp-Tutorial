//Hybrid inheritance--> It is a combination of more than one type of inheritance
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
class D:public B,public C
{
    public:
    void display3()
    {
        cout<<"sub class display3"<<endl;

    }
};
 int main()
 {
    D obj;
    obj.display3();
    obj.display1();
    obj.display2();

    B obj1;
    obj1.display1();
    obj1.display();


    C obj2;
    obj2.display();
    obj2.display2();

    return 0;
 }





















