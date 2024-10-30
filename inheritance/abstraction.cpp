// Abstraction -->  data abstraction is a process of providing only the essential details to the outside world and hiding the internal datails.


#include<iostream>
using namespace std;
class bank
{
    public:
    float a, interest,totbalance;
    int accountno;
    virtual void calcinterest(float balance)=0;
    void showinfo(int a)
    {
        accountno=a;
        cout<<"your account no. is :"<<accountno<<endl;
    }
};
class Sbi:public bank{
    public:
    void calcinterest(float balance)
    {
        a=balance;
        interest=a*5/100;
        totbalance=a+interest;
        cout<<"your interest is :"<<interest<<endl;
        cout<<"your total balance is :"<<totbalance<<endl;

    }
};
int main()
{
    Sbi obj;
    obj.showinfo(1024677899);
    obj.calcinterest(500);
    return 0;
}