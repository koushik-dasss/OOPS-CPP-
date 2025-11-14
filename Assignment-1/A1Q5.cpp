// Write a function power() to raise a number m to power n. The function takes a double value
// for m and int value for n and returns the result correctly. Use a default value of 2 for n to
// make the function to calculate the squares when this argument is omitted. Write a main that
// gets the values of m and n from the user to test the function.
#include<iostream>
#include<cmath>
using namespace std;
double power(double m , int n = 2 ){
    return pow(m,n);
}
int main(){
    double base ;
    int expo;
    cout<<"Enter the base :"<<endl;
    cin>>base;
    cout<<"Enter the exponent :"<<endl;
    cin>>expo;
    double result = power(base , expo);
    cout<<"Base "<<base<<" raised to the power "<<expo<<" is :"<< result<<endl;
    double result2 = power(base);
    cout<<"Base "<<base<<" raised to the power 2 (default) is  :"<< result2<<endl;
    return 0;
}