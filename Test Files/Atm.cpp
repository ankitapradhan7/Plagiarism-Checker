#include<iostream>
using namespace std;
class Atm
{
    string cardnumber,username,accno;
    int pin;
    float balance;
    public:
        void read()
        {
            cout<<"Enter Card Number of User = ";
            cin>>cardnumber;
            cout<<"Enter Pin of User = ";
            cin>>pin;
            cout<<"Enter User Name of User = ";
            cin>>username;
            cout<<"Enter Account Number of User = ";
            cin>>accno;
            cout<<"Enter Balance of User = ";
            cin>>balance;
        }
        float getBalance()
        {
            return balance;
        }
        void withdrawMoney()
        {
            int amt,pin0;
            cout<<"\nEnter Pin = ";
            cin>>pin0;
            if(pin0==pin)
            {
                cout<<"\nEnter Amount to be withdrawan = ";
                cin>>amt;
                if(amt%100==0)
                {
                    if(balance-amt>=0)
                    {
                        balance=balance-amt;
                    }
                }
                else
                {
                    cout<<"\nIncorrect Amount. Try Again.";
                    withdrawMoney();
                }
            }
            else
            {
                cout<<"\nWrong Pin.";
            }
        }
        void depositMoney(int amt)
        {
            int pin0;
            cout<<"\nEnter Pin = ";
            cin>>pin0;
            if(pin0==pin)
            {
                balance=balance+amt;
            }
            else
            {
                cout<<"\nWrong Pin.";
            }
        }
        void changePin(int newpin)
        {
            pin=newpin;
        }
};
int main()
{
    Atm a;
    a.read();
    a.depositMoney(500);
    a.withdrawMoney();
    cout<<"\nCurrent Balance = "<<a.getBalance();
    a.changePin(2357);
    return 0;
}