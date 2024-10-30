//Multilevel inheritance--> when one class inherits another class which is further inherited by another class , it is known as multilevel inheritance

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
        cout<<"intermediate  class"<<endl;

    }
};
class C:public B
{
    public:
    void show()
    {
        cout<<"sub class"<<endl;

    }
};
int main()
{
    C obj;
    obj.display();
    obj.display1();
    obj.show();
    return 0;
}
