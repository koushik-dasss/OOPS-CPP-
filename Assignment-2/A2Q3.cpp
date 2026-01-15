// Write a program that would create an Employee class having the following member functions.
// 1. getInfo() which takes the salary and number of hours of work per day of an employee as
// parameters.
// 2. AddSal() which adds 1000 to the salary of the employee if it is less than 5000.
// 3. AddWork() which adds 500 to the employee’s salary if the number of hours of work per
// day is more than 6 hours.
// Here, consider both AddSal() and AddWork() as private member functions and print the final
// salary of an employee.
#include<iostream>
using namespace std;
class Employee{
    private:
    double sal , hr ;
    void AddSal();
    void AddWork();
    public:
    void getInfo(double sal , double hr );
};
void Employee ::  getInfo(double s , double h){
    sal = s;
    hr = h;
    AddSal();
    AddWork();
    cout<<"Final salary of the employee is : "<<sal<<endl;
}
void Employee :: AddSal(){
    if(sal<5000){
        sal+=1000;
    }
}
void Employee :: AddWork(){
    if(hr>6){
        sal+=500;
    }
}
int main(){
    Employee emp;
    double sal , hr ;
    cout<<"Enter salary of the employee : "<<endl;
    cin>>sal;
    cout<<"Enter the number of working hours of the employee : "<<endl;
    cin>>hr;
    cout<<"Salary of the employee is : "<<sal<<" and the number of working hours of the employee is : "<<hr<<endl;
    emp.getInfo(sal,hr);
    return 0;
}