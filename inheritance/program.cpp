// overwrite members

#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void setdata(int p)
    {
        x=p;
    }
    void display()
    { cout<<"value of x is "<<x<< "\n";}
};
class B:public A
{
    int y;
    public:
    void setdata(int p)
    {
        y=p;
    }
    void display()
    { cout<<"value of y is "<<y<< "\n";}
};
int main()
{
    B obj;
    obj.setdata(10);  // call newly define
    obj.display();  // call newly define
    obj.A::setdata(100);
    obj.A::display();
    return 0;
}
