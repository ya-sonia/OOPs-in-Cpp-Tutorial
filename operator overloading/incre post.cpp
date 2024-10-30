#include<iostream>
using namespace std;
class incre
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
    void operator++(int) //*********
    {
        x=x+1;
    }
};
int main()
{
    incre obj;
    obj.getdata();
    cout<<"\n original value=";
    obj.putdata();
    obj++;// post increment
    cout<<"\n  post increment value is:";
    obj.putdata();
    return 0;
}