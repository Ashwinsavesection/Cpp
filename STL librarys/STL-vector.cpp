#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> a={50,40,30,20};
    a.push_back(10);
    cout<<"Capacity : "<<a.capacity()<<endl;
    cout<<"Size : "<<a.size()<<endl;
    cout<<"3 Element of Array : "<<a.at(3)<<endl<<endl;
    //pop function
    cout<<"    Before pop "<<endl;
    cout<<"A : ";
    for(int x:a){cout<<" "<<x;}
    cout<<endl;
    a.pop_back();
    cout<<"     After pop "<<endl;
    cout<<"A : ";
    for(int x:a){cout<<" "<<x;}
    //clear
    cout<<endl;
    cout<<"\nBefore clear size :  "<<a.size()<<endl;
    a.clear();
    cout<<"After clear size :  "<<a.size()<<endl;
    cout<<endl;
    //copy
    vector <int> b={11,22,33,44,55};
    vector <int> c(b);
    cout<<"B : ";
    for(int x:b)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    cout<<"C : ";
    for(int x:c)
    {
        cout<<" "<<x;
    }
    return 0;
}
