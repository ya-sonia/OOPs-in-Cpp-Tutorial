
#include<iostream>
using namespace std;
class decre
{
    int x;
    public:
    void getdata()
    {
        cout<<"\n enter no. :";
        cin>>x;
    }
    void putdata()
    {
        cout<<x;
    }
    void operator--()
    {
        x=x-1;
    }
};
int main()
{
    decre obj;
    obj.getdata();
    cout<<"\n original value=";
    obj.putdata();
    --obj; // pre decrement
    cout<<"\n decrement value is:";
    obj.putdata();
    return 0;
}