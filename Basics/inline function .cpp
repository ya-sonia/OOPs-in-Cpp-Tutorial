// inline function--> if a function is inline , then the compiler places the copy of the functions code in place of the function call and this can speed up the program execution.

#include<iostream>
using namespace std;
inline int fun(int a,int b)
{
    return a+b;
}
int main()
{
    int value=fun(34,67);
    cout<<value;
    return 0;
}