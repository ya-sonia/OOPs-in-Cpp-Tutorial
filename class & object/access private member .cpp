#include<iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    void display( int b)
    { 
        a=b;
        cout<<"value of a="<<a << endl;
    }
};
int main()
{
    A obj;
    obj.display(10);
    return 0;
}