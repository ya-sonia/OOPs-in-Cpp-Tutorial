//function overloading--> multiple function can have the same name with different parameters

#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
float sum(float x, float y)
{
    return x+y;
}
int main()
{
    int result1=sum(10,20);
    cout<<"sum1="<<result1<<endl;
    float result2=sum(10.34f,34.56f);
    cout<<"sum2="<<result2;
    return 0;
}