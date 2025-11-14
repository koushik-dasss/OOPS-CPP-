// using reference variables as arguments to swap the values of two variables in the main 
#include<iostream>
using namespace std;
void swap(int &r1 , int &r2){
    int temp = r1;
    r1 = r2;
    r2 = temp;
}
int main(){
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<"Before swap : a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);
    cout<<"After swap : a = "<<a<<" and b = "<<b<<endl;
    return 0;
}
