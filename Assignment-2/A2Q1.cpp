// Define a class to represent a bank account. Include the following members
// Data members:
// 1. Name of the depositor
// 2. Account number
// 3. Type of account (savings or current)
// 4. Balance amount in the account
// Member functions:
// 1. To assign initial values
// 2. To deposit an amount
// 3. To withdraw an amount after checking the balance
// 4. To display name and balance
// Write a main function to test the program.
#include <iostream>
using namespace std;
class BankAccount{
    string depositorName;
    long accNo;
    char accType;
    double bal;
    public:
    void setVal();
    void deposit();
    void withdrawl();
    void display();
};
void BankAccount :: setVal(){
    cout<<"Enter the depositor's name : "<<endl; // inout a single name 
    cin>> depositorName;
    cout<<"Enter the account number : "<<endl;
    cin>> accNo;
    cout<<"Enter the account type(C/S) :"<<endl;
    cin>>accType;
    cout<<"Enter the amount of balance :"<<endl;
    cin>>bal;
}
void BankAccount :: deposit(){
    double dep;
    cout<<"Enter the amount to be deposited : "<<endl;
    cin>>dep;
    bal+=dep;
}
void BankAccount :: withdrawl(){
    double wdw;
    cout<<"Enter the amount to be withdrawn :"<<endl;
    cin >> wdw;
    if(wdw>bal){
        cout<<"Insufficient balance in the account."<<endl;
    }else{
        bal-=wdw;
    }
}
void BankAccount :: display(){
    cout<<"Account Holder's name : "<< depositorName <<endl;
    cout<<"Account's Number : "<< accNo << endl;
    cout<<"Account's type : "<< accType << endl;
    cout<<"Balance in the account :"<< bal<< endl;
}
int main(){
    BankAccount acc;
    acc.setVal();
    acc.deposit();
    acc.withdrawl();
    acc.display();
    return 0;
}