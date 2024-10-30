#include<iostream>
using namespace std;
template<class T>
class A
{
    T a, b;
    public:
    A(T p,T q)
    { a=p; b=q; }
    void display()
    { cout<<"A="<<a<<ends<<"B="<<b<<endl; }
};
int main()
{
    A<int> ob(12,23);
    ob.display();
    A<float>ob1(23.334,566.899);
    ob1.display();
    A<char>obj2('d','f');
    obj2.display();
    return 0;
}