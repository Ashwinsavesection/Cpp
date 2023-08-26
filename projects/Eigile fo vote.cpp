#include <iostream>
using namespace std;
int main()
{
    int age;
    char gen;
    string name;
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter Your age  : ";
    cin>>age;
    if(age>=18)
    {
        cout<<"Enter Your Gender male::m-M  female::f-F : ";
        cin>>gen;
        if(gen=='m'||gen=='M')
        {
            cout<<endl<<name<<" Go To Room-5"<<endl;
        }
        else if(gen=='F'||gen=='f')
        {
            cout<<endl<<name<<" Go To Room-6"<<endl;
        }
        else
            cout<<"please enter you gender properly";
    }
    else
    {
        cout<<name<<" you are not eligible for vote. ";
    }
    return 0;
}

