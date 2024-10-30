#include<iostream>
using namespace std;
int main()
{
    int x ,*y;
    y=&x;
    y=new int[12];
    for(int i=0;i<=6;i++)
    { y[i]=i;}
     for(int i=0;i<=6;i++)
     {
        cout<<y[i];
        delete[]y;
     }
     return 0;
}