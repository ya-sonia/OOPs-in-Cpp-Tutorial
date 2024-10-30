// static data member=it is initialised to zero, whenever the first object of its class is created.No other initialisation is permitted.
// for making any data member static we use "static" keyword. only one copy of static data member is created and shared by all
// its visibility is in entire program




#include<iostream>
using namespace std;

class demo
{
    int x,y;
    static int z; //*****
    public:
    void getdata(int a, int b)
    {
        x=a;
        y=b;
        z=z+1;
    }
    void putdata()
    { cout<<"\t x="<<x<<"\t y="<<y<<"\t z="<<z<<endl;
    }
};

int demo::z; // **********

int main()
{
  demo obj1 , obj2;
  obj1.getdata(5,10);
  obj2.getdata(20,30);
  obj1.putdata();
  obj2.putdata();
  return 0;

}