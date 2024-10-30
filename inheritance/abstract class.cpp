// Abstract class---> A class which contain atleast one pure virtual function . we can't declare the object of abstract class.
// pure virtual function are virtual function which have no defination.If we don't  override the pure virtual function in derive class then derive class also becomes abstract class. We can't change the signature of pure virtual function.

// Abstract class--> which we do not create object  i.e , don't create instance.

// pure virtual function --> no body (or) it is abstract function


#include<iostream>
using namespace std;
class A 
{
    public:
    virtual void show()=0;  // pure virtual function
    void disp()
    {
        cout<<"base class\n";

    }
};
class B :public A
{
public:
void show()  // not pure virtual function, it is normal  member function
{
    cout<<"derive class\n";
}
};
int main()
{
    B obj;      A *ptr; 
    obj.disp();  // call base class
    obj.show();  //  call derive class

   ptr=&obj;
   ptr->show(); // call derive class
   ptr->disp();// call base class

   return 0;
}