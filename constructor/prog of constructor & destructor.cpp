#include<iostream>
using namespace std;
class student {
    int roll;
    int age;
    static int count;
    public:
    student()
    {
        cout<<"student()"<<endl;
        age=10;
        count++;
        roll=count;
        cout<<"count="<<count<< endl<<"roll="<<roll<<endl;
    }

    student(int a)
    {
        cout<<"student with parameter"<<endl;
        age=a;
        count++;
        roll=count;
        cout<<"roll="<<roll<<endl;

    }

    student(student & x)
    {   
        cout<<"student with copy constructor"<<endl;
        age=x.age;
        count++;
        roll=count;
        cout<<"roll="<<roll<<endl;
    }

    void display()
    {
        cout<<"age="<<age<<endl;
    }
  
   ~student()
   {
    cout<<"object with rollno  "<< roll<<"  destroyed"<<endl;
   }
};

int student::count;
int main()
{
    student s1;
     s1.display();
     student s2(20);
    student s3(s2);
    s1.display();
    s2.display();
    s3.display();
    return 0;

}