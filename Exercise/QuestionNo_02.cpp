/*Define a class bank account that include the following data members
    1.  Name of depositor
    2.  Account Number
    3.  Type of Account
    4.  Balance amount in the account
The Class also contain follwoing member function
    1.  A constructor to Assign initial values
    2.  deposit functiont to deposit some amount it should accept the amount as perameter
    3. withdraw function to withdraw an amount after checkig the blance it should accept the amount as perameter
    4.  Display fucntion to display name and balance
*/
#include<iostream>
using namespace std;
/*-------------------- Class ----------------------------*/
class bank
{
    private:
        string depo_name, account_no, account_type;
        double balance;
    public:
        bank()
        {
            depo_name="Hassan Ali";
            account_no="90oiu1235poeq1";
            account_type="Personal";
            balance=0;
        }
        void deposit(int amount)
        {
                     balance += amount;
                     cout<<"Amount Deposit Successfull......"<<endl;
                     cout<<"Your New Balance is: Rs. "<<balance<<endl;
        }
        void withdraw(int amount)
        {
            if(amount>balance)
            {
                cout<<"You have insufficient Balance"<<endl;
                cout<<"Your Current Balance is:Rs.  "<<balance<<endl;
                cout<<"Withdraw Unsuccessfull......."<<endl;
            }
            else
            {
                balance-=amount;
                cout<<"Your New Balnce is:Rs.  "<<balance<<endl;
                cout<<"Withdraw Successful..........."<<endl;
            }
        }
        void display()
        {
            cout<<"Account Holder Name: "<<depo_name<<endl;
            cout<<"Account Holder Balance: "<<balance<<endl;
        }
};
/*------------------------Global Variable-----------------*/
int amount,choice;
/*-------------------- Main Function --------------------*/
int main()
{
    bank p1;
    
    while(true)
    {
        while(true)
        {
         system("cls");
         cout<<"Select Option From Given Below"<<endl;
         cout<<"1. Display Data"<<endl;
         cout<<"2. Deposit Amount"<<endl;
         cout<<"3. Withdraw Amount"<<endl<<endl;
         cout<<"Enter Choice: ";
         cin>>choice;
         switch(choice)
         {
            case 1:
                p1.display();
                system("Pause");
                break;
            case 2:
                cout<<"Enter Amount you Want to Deposit: ";
                cin>>amount;
                p1.deposit(amount);
                system("Pause");
                break;
            case 3:
                cout<<"Enter Amount Your Want to Withdraw: ";
                cin>>amount;
                p1.withdraw(amount);
                system("pause");
                    break;
            default:
            cout<<"You Enter Invalid Choice......."<<endl;
            system("Pause");
         }

        }
    }
    return 0;
}
