#include<iostream>
using namespace std;
template <class none>//enter template name
void swaping(none &a,none &b)//use template in a function
{
    none t=a;//use template in a variable declareation
    a=b;
    b=t;

}
int main()
{
    char a='K',b='L';
    int x=10,y=20;
    cout<<"Before Swap A:"<<a<<" |  B:"<<b<<endl;
    swaping(a,b);
    cout<<" After Swap A:"<<a<<" |  B:"<<b<<endl<<endl;
    cout<<"Before Swap X:"<<x<<" |  Y:"<<y<<endl;
    swaping(x,y);
    cout<<" After Swap X:"<<x<<" |  Y:"<<y<<endl;

    return 0;
}
