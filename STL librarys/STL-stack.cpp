#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    cout<<"\nlist size : "<<a.size()<<endl;
    cout<<"list Empty or Not  : "<<a.empty()<<endl;
    cout<<"Top : "<<a.top();
    return 0;
}
