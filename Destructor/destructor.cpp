// destructor --> A destructor work opposite to constructor .It deallocate the memory which is created by constructor.A destructor is defined like constructor .It must have same name as class but, it is prefixed with a tilde sign (~).  **Destructor function is automatically invoked when the objects are destroyed(termination).It cannot be declared static or const. The destructor does not have arguments.
// destructor  has no return type not even void. It should be declared in public section of class


#include<iostream>
using namespace std;

class A{
     public:
     A()  // constructor
     { 
        cout << " constructor is call"<<endl;
     }

     ~A()  // destructor
     {
        cout<<" destructor is call";
     }
};
int main()
{
    A obj;
    return 0;
}