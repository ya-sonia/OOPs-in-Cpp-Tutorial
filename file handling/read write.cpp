#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str1;
    string str2;
    ifstream in("file1.txt");
    ifstream in2("file2.txt");
    ofstream out("file3.txt");
    while(in.eof()==0)
    {
        getline(in,str1);
        getline(in2,str2);
        out<<str1<<endl;
        out<<str2<<endl;


    }
    return 0;
}