#include<iostream>
using namespace std;
class BankAc{
    string accHolder , accType;
    int accNo;
    double balance;
    public :
    void setVal();
    void deposit();
    void withdrawl();
    void display();
};
void BankAc::setVal(){
    cout<<"Enter account details:(name,type,number)"<<endl;
    cin>>accHolder>>accType>>accNo;
    cout<<"Enter balance :"<<endl;
    cin>>balance;
}
void BankAc::deposit(){
    int amt;
    cout<<"Enter amount of balance to be deposited :"<<endl;
    cin>>amt;
    balance+=amt;
}
void BankAc::withdrawl(){
    int wdw;
    cout<<"Enter withdrawl amount:"<<endl;
    cin>>wdw;
    if(wdw<0){
        cout<<"Invalid withdrawl amount";
    }
    if(wdw>balance){
        cout<<"Insufficient balance in the account.";
    }else{
        balance-=wdw;
    }
}
void BankAc::display(){
    cout<<"Account Holder name :"<<accHolder<<endl;
    cout<<"Account Type :"<<accType<<endl;
    cout<<"Account Number :"<<accNo<<endl;
    cout<<"Balance :"<<balance<<endl;
}
int main(){
    BankAc ac;
    ac.setVal();
    ac.deposit();
    ac.withdrawl();
    ac.display();
    return 0;
}