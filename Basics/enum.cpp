// enum is a datatype consisting of named values like elements,members etc.that represent integral constants. it also make code easy to maintain and less complex. To define enum in c++ , you must use the enum keyword along with the elements separated by commas 

#include<iostream>
using namespace std;

enum week{ monday,tuesday,wednesday,thursday,fridya,saturday,sunday};
int main()
{
    week day;
    day=wednesday;
    cout<<"day:"<<day;
    return 0;
}