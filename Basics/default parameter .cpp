#include<iostream>
using namespace std;
void add(int a, int b, int c=40)
{
    cout<<"sum of a,b,c="<<a+b+c<<endl;
}
int main()
{
    add(20,30);
    add(2,3);
    add(50,30);
    add(15,20,140);
    return 0;
}