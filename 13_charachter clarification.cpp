#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    /*
        Isalnum()
        Isalpha()
        Isdigit()
        Islower()
        Isupper()
        Isspace()
    */
    string name="As1 @";
    for(char x : name)
    {
        if(isalnum(x))
        {
            cout<<x;
        }
        if(isalpha(x))
        {
            cout<<x;
        }
        if(isdigit(x))
        {
            cout<<x;
        }
        if(islower(x))
        {
            cout<<x;
        }
        if(isupper(x))
        {
            cout<<x;
        }
        if(isspace(x))
        {
            cout<<x;
        }
    }
    return 0;
}
