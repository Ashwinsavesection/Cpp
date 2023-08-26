#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream o("test.txt",ios::trunc);
    o<<"ashwin kumar"<<endl;
    o<<"15 years old"<<endl;
    o<<"kakkadavu"<<endl;
    return 0;
}
