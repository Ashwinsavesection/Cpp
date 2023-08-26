#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> a(1,'b');
    a.push_back('c');
    a.push_front('a');
    cout<<"A : ";
    for(char x: a){cout<<" "<<x;}
    cout<<"\nlist size : "<<a.size()<<endl;
    cout<<"list Empty or Not  : "<<a.empty()<<endl;
    cout<<"list first Element : "<<a.front()<<endl;
    cout<<"list Last  Element : "<<a.back()<<endl;
    cout<<"Before Reverse : ";
     for(char x: a){cout<<" "<<x;}
     a.reverse();
    cout<<endl;
    cout<<"After Reverse : ";
    for(char x: a){cout<<" "<<x;}
    cout<<endl;
    cout<<"Before sort : ";
    for(char x: a){cout<<" "<<x;}
    a.sort();
    cout<<endl;
    cout<<"After sort : ";
    for(char x: a){cout<<" "<<x;}
    return 0;
}
