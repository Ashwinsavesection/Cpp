#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5> a= {10,20,30,40,50};
    array <int,5> b= {60,70,80,90,100};
    cout<<"Array size : "<<a.size()<<endl;
    for (int x: a)
    {
        cout<<x<<"|";
    }
    cout<<endl;
    cout<<"Array Element At 3 Intdex : "<<a.at(3)<<endl;
    cout<<"Array Empty or Not  : "<<a.empty()<<endl;
    cout<<"Array first Element : "<<a.front()<<endl;
    cout<<"Array Last  Element : "<<a.back()<<endl;
    cout<<"        Before swap "<<endl<<endl;
    cout<<"A : ";
    for(int x: a){cout<<x<<"|";} cout<<endl;
    cout<<"B : ";
    for(int x: b){cout<<x<<"|";} cout<<endl;
    a.swap(b);
    cout<<"         After swap "<<endl<<endl;
    cout<<"A : ";
    for(int x: a){cout<<x<<"|";} cout<<endl;
    cout<<"B : ";
    for(int x: b){cout<<x<<"|";} cout<<endl;
    return 0;
}
