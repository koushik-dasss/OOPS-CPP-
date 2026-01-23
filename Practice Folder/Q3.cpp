#include<iostream>
using namespace std;
class Employee{
    double salary ;
    int hrs;
    void AddSal();
    void AddWork();
    public:
    void getInfo(){
        cout<<"Enter the salary of the employee: "<<endl;
        cin>>salary;
        cout<<"Enter the number of hours of work per day: "<<endl;
        cin>>hrs;
    }
    void displayInfo(){
        cout<<"Initial salary of the employee: "<<salary<<endl;
        cout<<"Number of hours of work per day of the employee: "<<hrs<<endl;
        AddSal();
        AddWork();
        cout<<"Final salary of the employee: "<<salary<<endl;
    }
};
void Employee :: AddSal(){
    if(salary<500){
        salary+=10;
    }
}
void Employee :: AddWork(){
    if(hrs>7){
        salary+=5;
    }
}
int main(){
    Employee emp1;
    emp1.getInfo();
    emp1.displayInfo();
    return 0;
}