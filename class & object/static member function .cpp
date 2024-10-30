// static member function = static member function can access only static data members. static member function are also not a part of an object( like static data member) .It is independent. It is part of class .Since, it is not the part of any object,it is call using the class name.


#include<iostream>
using namespace std;
class demo
{
    int x;
    static int y;
    public:
    void getdata( int a)
    {
        x=a;
        y=y+1;
    }
   void putdata()
   {
    cout<<"\n x="<<x<<"\n y="<<y;
   }
   static void abc()
   {
    cout<<"\n y="<<y;  // only static data member access
   }

};

int demo::y;  //*******

int main()
{
    demo obj;
    obj.getdata(10);
    obj.putdata();
    demo::abc();
    return 0;
}