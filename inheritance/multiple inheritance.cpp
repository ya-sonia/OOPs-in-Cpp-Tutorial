//Multiple inheritance --> more than one superclass and one subclass access all the properities of superclass.
#include<iostream>
using namespace std;
class A{
    public:
    void display()
    {
        cout<<" superclass display"<<endl;
    }
};

class B{
    public:
    void show()
    {
        cout<<" superclass show"<<endl;
    }
};
class C:public A,public B
{
    public:
    void display1()
    {
        cout<<" subclass display1"<<endl;
    }
};

int main()
{
    C obj;
    obj.display();
    obj.show();
    obj.display1();
    return 0;
}