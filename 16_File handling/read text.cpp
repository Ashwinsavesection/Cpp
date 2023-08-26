#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string mytxt;
    ifstream myfile("test.txt");
    while(getline(myfile,mytxt))
    {
        cout<<mytxt<<endl;
    }
    return 0;
}
