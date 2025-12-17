// Consider a class network of the following figure. The class master derives information from both
// account and admin classes which in turn derives information from the class person. Define all the
// four classes and write a program to create, update and display the information contained in master
// objects.
// MULTIPATH INHERITANCE CONCEPT 
//  Person -> Name , Code  (these 2 are data members) (This is the base class)
//  Account -> pay (derived class from Person) (data member), admin -> experience(data member) (derived class from Person)
//  Both the above classes (the derived classes) have a common derived class -> Person -> Name , Code , Experience , Pay (4 data members in the last derived class from the above two derived classes of the main base class)
#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int code;
    public:
    void setPerson(string n , int c){
        name = n;
        code = c;
    }
    void displayPerson(){
        cout<<"Name : "<<name<<endl;
        cout<<"Code : "<<code<<endl;
    }
};
class Account : virtual public Person{ // virtual base class 
    protected:
    double pay;
    public:
    void setPay(double p){
        pay = p;
    }
    void displayPay(){
        cout<<"Pay : "<<pay<<endl;
    }
};
class Admin : public virtual Person{ // virtual base class
    protected:
    int experience; 
    public:
    void setExperience(int e){
        experience = e;
    }
    void displayExperience(){
        cout<<"Experience : "<<experience<<endl;
    }
};
class Master : public Account , public Admin {
    public:
    void setMaster(string n , int c , double p , int e){
        setPerson(n,c);
        setPay(p);
        setExperience(e);
    }
    void displayMaster(){
        displayPerson();
        displayPay();
        displayExperience();
    }
};
int main(){
    Master m;
    m.setMaster("Koushik",101,50000,3);
    cout<<"Master details"<<endl;
    m.displayMaster();
    return 0;
}