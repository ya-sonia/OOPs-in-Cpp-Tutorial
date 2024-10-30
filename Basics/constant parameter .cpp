#include<iostream>
using namespace std;
void add(int a,int b,  const int c) // value of c is constant i.e 30
{
    cout<<"sum of a,b,c  "<<a+b+c<<endl;
}
int main()
{
    add(20,20,30); // value of c is constant i.e 30
    add(30,20,10); // value of c is constant i.e 10
    return 0;

}