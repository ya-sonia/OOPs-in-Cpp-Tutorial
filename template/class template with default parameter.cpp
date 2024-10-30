#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>
class A
{
    public:
    T1 a;
    T2 b;
    T3 c;
    A(T1 x, T2 y, T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"value of a="<<a<<endl;
        cout<<"value of b="<<b<<endl;
        cout<<"value of c="<<c<<endl;

    }
};
int main()
{
    A<>obj(23,34.56,'d');
    obj.display();
    cout<<endl;
    A<float,char,char>obj2(23.45,'s','f');
    obj2.display();
    return 0;
}