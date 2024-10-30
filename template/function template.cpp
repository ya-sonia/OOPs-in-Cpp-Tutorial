#include<iostream>
using namespace std;
template<class T>
void show(T a , T b)
{
    cout<<"A="<<a<<ends<<"B="<<b<<endl;
}
int main()
{
    int p=10,q=20;
    char m='a',n='b';
    float s=10.23,f=348.56;
    show(p,q);
    show(m,n);
    show(s,f);
    return 0;
}
