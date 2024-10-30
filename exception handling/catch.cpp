#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"\n enter value of x :";
    cin>>x;
    try{          // --> one try block with multiple catch block
        if(x==0)
        throw(x);
        if(x==100)
        throw('A');
        if(x==1000)
        throw(5.5f);

    }

    catch(int x)  // --> multiple catch statement
    {
        cout<<"value of x is zero : "<<x;
    }
     catch(char x)
    {
        cout<<"value of x is char :"<<x;
    }
     catch(float x)
    {
        cout<<"value of x is float :"<<x;
    }



    catch(...) // --> accept all types of exceptions . It is single catch statement for multiple exceptions
    {
        cout<<"\n some error occur";
    }
    return 0;
}