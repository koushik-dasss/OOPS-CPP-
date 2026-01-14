#include <iostream>
using namespace std;
class BankAccount{
    string accHolder;
    char accType;
    long accNo;
    double bal;
    public :
    void setVal();
    void deposit();
    void withdrawl();
    void display();
};
void BankAccount :: setVal(){
    cout<<"Enter the account holder name: "<<endl;
    cin>>accHolder;
    cout<<"Enter the account type : "<<endl;
    cin>>accType;
    cout<<"Enter the account number : "<<endl;
    cin>>accNo;
    cout<<"Enter the account balance :"<<endl;
    cin>>bal;
}
void BankAccount :: deposit(){
    double dep;
    cout<<"Enter amount to be deposited : "<<endl;
    cin>>dep;
    bal+=dep;
}
void BankAccount :: withdrawl(){
    double wdw;
    cout<<"Enter amount to be withdrawn : "<<endl;
    cin>>wdw;
    if(wdw>bal){
        cout<<"Insufficient balance in the account.";
    }else{
        bal-=wdw;
    }
}
void BankAccount :: display(){
    cout<<"Account holder name: "<<accHolder<<endl;
    cout<<"Account type : "<<accType<<endl;
    cout<<"Account number :"<<accNo<<endl;
    cout<<"Account balance : "<<bal<<endl;
}
int main(){
    BankAccount obj;
    obj.setVal();
    obj.deposit();
    obj.withdrawl();
    obj.display();
    return 0;
}