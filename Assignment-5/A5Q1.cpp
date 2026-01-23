// Create a class named Employee with data members for name and ID. Create a class inheriting
// the Employee class, namely Salary, which is used to enter the basic salary, daily allowance,
// and house rent allowance for each employee. Create another class inheriting the Salary class,
// named Bonus, to take the input for the bonus amount. Here, we want to calculate the total
// net salary of an employee. Display the full salary slip of an employee with their name and ID.
#include <iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int ID;
    public:
    void getInfo(){
        cout<<"Enter employee's name : "<<endl;
        cin>>name;
        cout<<"Enter employee's ID : "<<endl;
        cin>>ID;
    }
};
class Salary : public Employee{
    protected:
    double bs,da,hra;
    public:
    void getSalary(){
        cout<<"Enter basic salary : "<<endl;
        cin>>bs;
        cout<<"Enter daily allowance : "<<endl;
        cin>>da;
        cout<<"Enter house rent allowance : "<<endl;
        cin>>hra;
    }
};
class Bonus : public Salary{
    protected:
    double bonusAmt , netSalary;
    public:
    void getBonus(){
        cout<<"Enter bonus amount : "<<endl;
        cin>>bonusAmt;
    }
    void calcSalary(){
        netSalary = bs+da+hra+bonusAmt;
    }
    void displaySalary(){
        cout<<"Employee Name:  "<<name<<endl;
        cout<<"Employee ID: "<<ID<<endl;
        cout<<"Basic salary: "<<bs<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"Bonus: "<<bonusAmt<<endl;
        cout<<"Total net salary: "<<netSalary<<endl;
    }
};
int main(){
    Bonus emp1;
    emp1.getInfo();
    emp1.getSalary();
    emp1.getBonus();
    emp1.calcSalary();
    emp1.displaySalary();
    Bonus emp2;
    emp2.getInfo();
    emp2.getSalary();
    emp2.getBonus();
    emp2.calcSalary();
    emp2.displaySalary();
    return 0;
}