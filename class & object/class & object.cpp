   //create class and object, data members and member functions can be access by using dot(.) operator with object
   
#include<iostream>
using namespace std;

class student{
    public:
    int rollno;  //-->member data
    string name;  // -->member data
    void show()  // -->member function
    { cout<<"name = "<<name <<endl;
      cout<<"rollno ="<<rollno;
    }
};
int main()
{
    student obj;
    obj.rollno=30;
    obj.name="Ram";
    obj.show();
    return 0;
}
