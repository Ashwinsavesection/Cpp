#include <iostream>
using namespace std;
class account
{
private:
    string name;
    int accno;
    string actype;
public:
    void getaccountdeatails()
    {
        cout<<"\nEnter User Name : ";
        cin>>name;
        cout<<"\nEnter Account Number : ";
        cin>>accno;
        cout<<"\nEnter Account Type : ";
        cin>>actype;
    }
    void displaydetails()
    {
        cout<<"\nUser Name : "<<name;
        cout<<"\nAccount number : "<<accno;
        cout<<"\nAccount type : "<<actype;
    }
};
class current_account:public account
{
private:
    float balance,deposit,withdraw;
public:
    void c_display()

    {
        cout<<"\nBalance : "<<balance;
    }
    void c_deposit()
    {
        cout<<"\nEnter amount to Deposit : ";
        cin>>deposit;
        balance=balance+deposit;
    }
    void c_withdraw()
    {
        cout<<"\nBalance : "<<balance;
        cout<<"\nEnter amount to Withdraw : ";
        cin>>withdraw;
        if(balance>1000)
        {
            balance-=withdraw;
            cout<<"\nBalance : "<<balance;
        }
        else
            cout<<"\n insufficient balance";
    }
};
class saving_account:public account
{
private:
    float sav_balance,sav_withdraw,sav_deposit;
public:
    void s_display()

    {
        cout<<"\nBalance : "<<sav_balance;
    }
    void s_deposit()
    {
        float intreast;
        cout<<"\nEnter amount to Deposit : ";
        cin>>sav_deposit;
        sav_balance=sav_balance+sav_deposit;
        intreast=(sav_balance*2)/100;
        sav_balance+intreast;
    }
    void s_withdraw()
    {
        cout<<"\nBalance : "<<sav_balance;
        cout<<"\nEnter amount to Withdraw : ";
        cin>>sav_withdraw;
        if(sav_balance>500)
        {
            sav_balance-=sav_withdraw;
            cout<<"\nBalance : "<<sav_balance;
        }
        else
            cout<<"\n insufficient balance";
    }
};
int main()
{
    current_account  c1;
    saving_account s1;
    char type;
    cout<<"\nEnter Account type S : saving C : current account :: ";
    cin>>type;
    if(type=='s' || type=='S')
    {
        int cho;
        s1.getaccountdeatails();
        while(1)
        {
            cout<<"\n1) Deposit";
            cout<<"\n2) Withdraw";
            cout<<"\n3) Display Balance";
            cout<<"\n4) Display details";
            cout<<"\n5) Exit";
            cout<<"\nChoose Your Choice : ";
            cin>>cho;
            if(cho==1)
                s1.s_deposit();
            else if(cho==2)
                s1.s_withdraw();
            else if(cho==3)
                s1.s_display();
            else if(cho==4)
                s1.displaydetails();
            else if(cho==5)
                break;
        }
    }
    else if(type=='c' || type=='C')
    {
        int cho;
        c1.getaccountdeatails();
        while(1)
        {
            cout<<"\n\n1) Deposit";
            cout<<"\n2) Withdraw";
            cout<<"\n3) Display Balance";
            cout<<"\n4) Display details";
            cout<<"\n5) Exit";
            cout<<"\nChoose Your Choice : ";
            cin>>cho;
            if(cho==1)
                c1.c_deposit();
            else if(cho==2)
                c1.c_withdraw();
            else if(cho==3)
                c1.c_display();
            else if(cho==4)
                c1.displaydetails();
            else if(cho==5)
                break;
            else
                cout<<"\nInvalid Selection.."<<endl;
        }
    }
    else{
        cout<<"\nInvalid type.";
    }
    return 0;
}

