#include<iostream>
using namespace std;

class A{
    public:
    void show();
    
};
void A ::show() //--> outside class defination
{
    cout<<"show is call";
}
int main()
{
    A obj;
    obj.show();
    return 0;
}