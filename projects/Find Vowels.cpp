#include <iostream>
using namespace std;
int main()
{
    char input;
    cout<<"Enter Any Character : ";
    cin>>input;
    if(input=='a' || input=='e' ||input=='i' ||input=='o' ||input=='u' ||input=='A' || input=='E' ||input=='I' ||input=='O' ||input=='U' )
        cout<<input<<" its a vowel."<<endl;
    else
    {
        cout<<input<<" its not a vowel."<<endl;
    }
    return 0;
}

