// 1.6 Write a function that performs the same operation as that of Problem no. 1.8 but takes an int
// value for m. Both the functions should have the same name. Write a main that calls both the
// functions. Use the concept of function overloading.
#include <iostream>
#include <cmath>
using namespace std;
double power(double m , double n = 2){
    return pow(m,n);
}
int power(int m , int n =2){
    return pow(m,n);
}
int main(){
    double d_base , d_expo;
    cout<<"Enter a double base :";
    cin>>d_base;
    cout<<"Enter a double exponent :";
    cin>>d_expo;
    int int_base , int_expo;
    cout<<"Enter an int. base :";
    cin>>int_base;
    cout<<"Enter an int. expo :";
    cin>>int_expo;
    double result1 = power(d_base,d_expo);
    cout<<"Double base "<<d_base<<" to the double power  "<< d_expo<< " is :"<< result1<<endl;
    double result2 = power(d_base);
    cout<<"Double base "<<d_base<<" to the power 2(default) "<< " is :"<< result2<<endl;
    int result3 = power(int_base , int_expo);
    cout<<"Integer base "<<int_base<<" to the power  "<< int_expo<< " is :"<< result3<<endl;
    int result4 = power(int_base);
    cout<<"Integer base "<<int_base<<" to the power 2(default)  "<< " is :"<< result4<<endl;
    return 0;
}