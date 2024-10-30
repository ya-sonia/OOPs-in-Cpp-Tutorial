#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void getdata()
    {
        cout<<"\n enter no :";
        cin>>x;

    }
    void putdata()
    {
        cout<<"\n value = "<<x;
    }
    bool operator==(A obj)
    {
        if(x==obj.x)
        return true;
        else
        return false;
    }
};
int main()
{
    A obj1 , obj2;
    obj1.getdata();
    obj2.getdata();
   obj1.putdata();
   obj2.putdata();
   if(obj1==obj2)
   cout<<"\nvalue are equal";
   else
   cout<<"\n not equal";
    return 0;
}