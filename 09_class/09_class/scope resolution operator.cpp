#include<iostream>
using namespace std;
//scope resolution "::"
class examble
{
private:
    string name;
    int m1,m2,m3,tota;
    float avg;
public:            // used this way to access scope
    void getdata();//---------------------|
    void display();//                     |
};                 //                     |
void examble::getdata()//             <---|
{
    cout<<"Enter Name of student : ";
    cin>>name;
    cout<<"Enter m1,m2,m3 : ";
    cin>>m1>>m2>>m3;
}
void examble::display()
{
    tota=m1+m2+m3;
    avg=tota/3.0;
    cout<<"Name    : "<<name<<endl;
    cout<<"M1      : "<<m1<<endl;
    cout<<"M2      : "<<m2<<endl;
    cout<<"M3      : "<<m3<<endl;
    cout<<"Total   : "<<tota<<endl;
    cout<<"Average : "<<avg<<endl;
}
int main()
{
    examble o;
    o.getdata();
    o.display();
    return 0;
}
