#include<iostream>
using namespace std;
int main(){
    int n1, n2 , sum , avg ; 
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;
    sum = n1+n2;
    avg = sum/2;
    cout<<"The sum of "<< n1<<" and "<< n2 << " is  : "<< sum<< endl ; 
    cout<<"The avg. of "<< n1<<" and "<< n2 << " is  : "<< avg ; 
    return 0;
}