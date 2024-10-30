#include<iostream>
using namespace std;
template<class T1,class T2>
class A
{
    public:
    T1 x;
    T2 y;
    A(T1 a,T2 b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<endl<<y;
    }
};
int main()
{
    A<int,char>obj(23,'c');
    obj.display();
    return 0;
}