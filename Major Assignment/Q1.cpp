// Assume that a bank maintains kinds of accounts for customers, one called as savings account and
// the other as current account. The savings account provides compound interest and withdrawal
// facilities, but no cheque book facility. The current account provides cheque book facility but no
// interest. Current account holders should also maintain a minimum balance and if the balance falls
// below this level, a service charge is imposed. Create a class account that stores customer name,
// account number and type of account. From this, derive the classes cur acct and sav acct to make
// them more specific to their requirements. Include necessary member functions in order to achieve
// the following tasks:
// (a) Accept deposit from a customer and update the balance.
// (b) Display the balance.
// (c) Compute and deposit interest.
// (d) Permit withdrawal and update the balance.
// (e) Check for the minimum balance, impose penalty, necessary, and update the balance.
// Use constructors to initialize the class members for all the three classes.
#include <iostream>
using namespace std;
class Account{
    protected:
    string customerName;
    int accNo;
    char type;
    double balance;
    public :
    Account(string name , int acc , char t , double bal){
        customerName = name;
        accNo = acc;
        type = t;
        balance = bal;
    }
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(amount>balance){
            cout<<"Insufficient balance in the account."<<endl;
        }else{
            balance-=amount;
        }
    }
    void displayBalance(){
        cout<<"Current Balance for "+ customerName + " is: "<<balance<<endl;
    }
};
class SavingsAccount: public Account{
    double rate;
    public :
    SavingsAccount(string name , int acc , double bal , double r): Account(name , acc , 'S' , bal){ // constructor chaining 
        rate = r ;
    }
    void compoundInterest(){
        double interest = balance * rate/100;
        balance += interest ;
    }
};
class CurrentAccount : public Account{
    double minBalance;
    double penalty;
    public:
    CurrentAccount(string name , int acc , double bal , double minBal , double pen): Account(name, acc , 'C' , bal){
        // constructor chaining 
        minBalance = minBal;
        penalty = pen;
    }
    void checkMinBalance(){
        if(balance < minBalance){
            cout<<"Minimum balance is not maintained. Penalty imposed."<<endl;
            balance -= penalty;
        }
    }
};
int main(){
    SavingsAccount sav("Koushik Das",101,1000,5);
    sav.deposit(5000);
    sav.withdraw(2000);
    sav.compoundInterest();
    sav.displayBalance();
    cout<<endl;
    CurrentAccount cur("John Cena",201,500,1000,500);
    cur.deposit(200);
    cur.withdraw(20000);
    cur.checkMinBalance();
    cur.displayBalance();
    return 0;
}