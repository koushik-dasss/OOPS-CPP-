// Modify the class and program of Problem No. 2.1 for handling of 10 customers.
#include<iostream>
using namespace std;
class BankAccount{
    string accHolder;
    double bal;
    long accNo;
    char accType;
    public:
    void setVal();
    void deposit();
    void withdrawl();
    void display();
};
void BankAccount :: setVal(){
    cout<<"Enter account holder's name : "<<endl;
    cin>>accHolder;
    cout<<"Enter account number : "<<endl;
    cin>>accNo;
    cout<<"Enter balance : "<<endl;
    cin>>bal;
    cout<<"Enter account type : "<<endl;
    cin>>accType;
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
    cout<<"Account holder name : "<< accHolder<<endl;
    cout<<"Account type : "<<accType<<endl;
    cout<<"Account number : "<<accNo<<endl;
    cout<<"Balance : "<< bal<< endl;
}
int main(){
    BankAccount obj[10];
    for(int i = 0 ; i < 10 ; i++){
        obj[i].setVal();
        obj[i].deposit();
        obj[i].withdrawl();
        obj[i].display();
    }
    return 0;
}