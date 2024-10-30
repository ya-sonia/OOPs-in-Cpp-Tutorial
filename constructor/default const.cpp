// constructor--> constructor is a special type of  member function of a class which is used to initialize value of a variable inside an object of a class. It allocates memory to an object.  constructor is automatically called when object is created.It does not have any return type. constructor can be placed in public section of class because the object of a class can access public members. ** The name of constructor is same name as the classname. constructor can't be " virtual".

// default constructor-->  has no parameter




#include<iostream>
using namespace std;
class A{
    public:
    A()  // name of constructor is same name as the classname.
    { cout<<"  default constructor A  is call"<<endl;}
};
class B{
    public:
    B()
    { cout<<" default constructor B is call";}
};
int main()
{
    A obj1;
    B obj2;
    return 0;
}