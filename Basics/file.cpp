#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
   /* string str1,str2;
    ifstream file1,file2;
    ofstream file3;
    file1.open("file1.txt");
    file2.open("file2.txt");
    file3.open("file3.txt");
    while(!file1.eof()&&!file2.eof())
    {
        getline(file1,str1);
        getline(file2,str2);
        file3<<str1<<endl;
        file3<<str2<<endl;
    }
    file3.close();
    file1.close();
    
    file2.close();
    */
  string str1,str2;
  ifstream in1("file1.txt");
  ifstream in2("file2.txt");
  ofstream out("file3.txt");
  while(!in1.eof()&& !in2.eof())
  {
    getline(in1,str1);
    getline(in2,str2);
    out<<str1<<endl;
    out<<str2<<endl;
  }

return 0;
}