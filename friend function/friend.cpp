//Friend function -->Friend function has priviliges to  access all private and protected members of the class. By using the keyword friend compiler knows the given function is a Friend function
//A Friend function is a non - member function or ordinary function of a class .It can be invoked like a normal function((ordinary function) .It cannot be called using the object name and dot operator. However, it may accept the object as an argument whose value it wants to access. It cannot be called using the object as it is not in the scope of that class.
//A Friend function can be declared in any section of the class i.e. public or private or protected.  The function is not in the scope of the class to which it has been declared as a friend.


//        **********ADVANTAGES OF FRIEND FUNCTION  ***********
// 1. A Friend function is able to access members without the need of inheriting the class.
 // 2. The Friend function acts as bridge between two classes  by accessing their private data
 //3. It can be used to increase the versatility of overloaded operators.
 //4. It can be declared either in public or private or protected part of the class.


 //     *********** DISADVANTAGES OF FRIEND FUNCTION  **********
 // 1. Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
 // 2. Friend functions cannot do any run-time polymorphism in their members.



 // Program to find difference of age by using friend function

 #include<iostream>
 using namespace std;

 class student;
 class teacher{
    int age;
    public: 
    void getdata(int a)
    { age=a;}
    void putdata()
    { cout<<"teacher age="<<age<<endl;}
    friend int diff(teacher  , student );
 };

 class student{
    int age;
    public: 
    void setdata(int b)
    { age=b;}
    void display()
    { cout<<"\n student age="<<age<<endl;}
    friend int diff(teacher  , student );
 };

 int diff(teacher t , student s)
 { return (t.age - s.age); }


 int main()
 {
    teacher t; student s;
    t.getdata(40);
    t.putdata();
    s.setdata(19);
    s.display();
    cout<<"\n difference of age ="<<diff(t,s)<<endl;
    return 0;
 }