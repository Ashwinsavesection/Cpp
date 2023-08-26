#include<iostream>
using namespace std;
int main()
{
    enum a {male,female}b;
    b=male;
    switch(b)
    {
    case male:
        cout<<"Gender Male"<<endl;
        break;
    case female:
        cout<<"Gender Female"<<endl;
        break;
    default:
        cout<<"invalid"<<endl;
        break;
    }
}
