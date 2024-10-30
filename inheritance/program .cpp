#include<iostream>
using namespace std;

class A{
    int x;
public:
    A(){
        cout<<"constr() of A class\n";
        x=10;
    }
    A(int p){
        cout<<"constr(int) of A class\n";
        x=p;
    }
    A(int p, int q){
        cout<<"constr(int, int) of A class\n";
        x=p+q;
    }
    void setData(int p){
        x=p;
    }
    void display(){
        cout<<"value of x is "<<x<<"\n";
    }
};

class B:public A{
    int y;
public:
    B(){
        cout<<"constr() of B class\n";
        y=10;
    }
    B(int p):A(p,p){
        cout<<"constr(int) of B class\n";
        y=p;
    }
    B(int p, int q){
        cout<<"constr(int, int) of B class\n";
        y=p+q;
    }
    void setData(int p){
        y=p;
    }
    void display(){
        cout<<"value of y is "<<y<<"\n";
    }
};

int main(){
    B obj(111);
    obj.display();
    obj.A::display();


    return 0;
}

