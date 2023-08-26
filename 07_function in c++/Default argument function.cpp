#include<iostream>
using namespace std;
void bio(string name,int age,string city="'NONE'")//set default argument value in a function
{
    cout<<name<<" is from "<<city<<" and age is "<<age<<endl;
}
int main()
{
    bio("Ashwin",15);//Not declared city but city default None
    bio("Akash",16,"coimatore");
    return 0;
}
