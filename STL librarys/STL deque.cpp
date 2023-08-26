#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int> a(5,4);
    a.push_back(15);
    a.push_front(5);
    cout<<"A : ";
    for(int x: a){cout<<" "<<x;}
    cout<<"\nDeque size : "<<a.size()<<endl;
    cout<<"Deque Empty or Not  : "<<a.empty()<<endl;
    cout<<"Deque Element At 3 Intdex : "<<a.at(2)<<endl;
    cout<<"Deque first Element : "<<a.front()<<endl;
    cout<<"Deque Last  Element : "<<a.back()<<endl;
    a.pop_back();
    a.pop_front();
    cout<<"A : ";
    for(int x: a){cout<<" "<<x;}
    return 0;
}
