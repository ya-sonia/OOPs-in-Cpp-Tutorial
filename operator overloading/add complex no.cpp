#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    void getdata()
    {
        cout<<"\n enter real and img part : ";
        cin>>real>>img;
    }
    void putdata()
    {
        cout<<"\n"<<real<<"+i"<<img;
    }


    complex operator+(complex c2)
    {
        complex temp;
        temp.real=real+c2.real;
        temp.img=img+c2.img;
        return temp;

    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c1.putdata();
    c2.putdata();
    c3.putdata();
    return 0;

}