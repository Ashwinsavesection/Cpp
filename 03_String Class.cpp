#include <iostream>
using namespace std;
int main()
{
    //String concatenation
    string firstname="Ashwin";
    string lastname="kumar";
    cout<<firstname+lastname<<endl ;
    string fullname=firstname.append(lastname);
    cout<<fullname<<endl;
    cout<<"----------------------"<<endl;
    //String Access
    string name="ashwin kumar";
    name[0]='A';
    cout<<name<<endl;
    cout<<"----------------------"<<endl;
    //input function
    string str;
    cout<<"Enter Your Name : ";
    getline(cin,str);
    str.push_back('h');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<"----------------------"<<endl;
    //capacity function
    string str1="ashwin";
    cout<<"size : "<<str1.size()<<endl;
    cout<<"size : "<<str1.length()<<endl;
    cout<<"size : "<<str1.max_size()<<endl;
    cout<<"----------------------"<<endl;
    //iterator function
    string str3="ashwin";
    string::iterator it;
    for(it=str3.begin();it!=str3.end();it++)
        cout<<*it <<endl;
    cout<<"----------------------"<<endl;
    string::reverse_iterator it1;
    for(it1=str3.rbegin();it1!=str3.rend();it1++)
        cout<<*it1 <<endl;
    cout<<"----------------------"<<endl;
    //Manipulating function
    string x="A";
    string y="B";
    cout<<"Before X : "<<x<<endl;
    cout<<"Before Y : "<<y<<endl;
    x.swap(y);
    cout<<"After  X : "<<x<<endl;
    cout<<"After  Y : "<<y<<endl;
    return 0;
}
