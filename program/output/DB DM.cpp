#include<iostream>
using namespace std;
class DB;
class DM
{
private:
    float M, CM;
public:
    void storevalue()
    {   cout<<"enter m and cm values:";
       // cout<<"the value of M and CM"<<endl;
        cin>>M>>CM;
    }
    friend void add(DM, DB);
};

class DB
{
private:
    float F, I;
public:
    void storedata()
    {   cout<<"enter feet and inches:";
      //  cout<<"the value of F and I"<<endl;
        cin>>F>>I;
    }
    friend void add(DM, DB);
};
    void add(DM a, DB b)
    {
        b.F = (30.48*b.F);
        b.I = (2.54*b.I);
        a.CM += b.F + b.I;
        a.M = int(a.M) + int(a.CM/100);
        a.CM = int(a.CM)%100;
        cout<<"the distance is:"<<a.M<<"m"<<a.CM<<"cm"<<endl;
    }


int main()
{
    DM a;
    DB b;
    a.storevalue();
    b.storedata();
    add(a,b);
    return 0;
}

    