
#include<iostream>
using namespace std;
 
 class A {
    public:
    void display()
    {
        cout<<" display is call "<<endl;
    }
 };

 class B{
    public:
    void show()
    {
        cout<<"show is call";
    }
 };
 int main()
 {
    A obj1;
    obj1.display();
    B obj2;
    obj2.show();
    return 0;
 }