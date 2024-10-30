#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex()
    {
       real=0;
       img=0; 
    }
    complex(int a,int b)
    {
        real=a; img=b;
    }
    void display()
    {
        cout<<"\n"<<real<<"+i"<<img;
    }


    complex operator++()
    {
        complex temp;
        temp.real=++real;
        temp.img=++img;
        return temp;

    }
    
    complex operator++(int)
    {
        complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;

    }

};
int main()
{
    complex c1(10,20);
    complex c2,c3;
    c2=++c1;
    c2.display();
    c3=c2++;
    c3.display();
    c2.display();
    return 0;
    
}