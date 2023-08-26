#include <iostream>
using namespace std;
int main()
{
    int h,t;
    float c;
    cout<<"Enter value of Hardness,Tensile Strength and carbon . "<<endl;
    cout<<"Enter Hardness : ";
    cin>>h;
    cout<<"Enter Tensile  : ";
    cin>>t;
    cout<<"Enter carbon   : ";
    cin>>c;
    int grade;
    if(h>50 && c<0.7 && t>5600)
    {
        grade=10;
    }
    else if(h>50 && c<0.7 )
    {
        grade=9;
    }
    else if(c<0.7 && t>5600)
    {
        grade=8;
    }
    else if(h>50 && t>5600)
    {
        grade=7;
    }
    else if(h>50 || c<0.7 || t>5600)
    {
        grade=6;
    }
    else
    {
        grade=5;
    }
    cout<<"Steel Grade : "<<grade;
    return 0;
}

