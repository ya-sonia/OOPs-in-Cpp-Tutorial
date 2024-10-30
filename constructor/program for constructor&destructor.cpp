#include<iostream>
using namespace std;
class student {
    int age;
    public:
    student()
    {
        cout<<"student()"<<endl;
        age=10;
    }

    student(int a)
    {
        cout<<"student with parameter"<<endl;
        age=a;
    }

    student(student & x)
    {   
        cout<<"student with copy constructor"<<endl;
        age=x.age;
    }

    void display()
    {
        cout<<age<<endl;
    }
  
   ~student()
   {
    cout<<"destructor is call"<<endl;
   }
};
int main()
{
    student s1;
    student s2(20);
    student s3(s2);
    s1.display();
    s2.display();
    s3.display();
    return 0;

}