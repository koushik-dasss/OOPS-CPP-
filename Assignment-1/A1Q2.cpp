// Write a function using reference variables as arguments to swap the values of a pair of integers.
#include <iostream>
using namespace std;
void swap(int &r1 , int &r2){
    int temp = r1;
    r1 = r2;
    r2 = temp;
}
int main(){
    cout<<"Enter two numbers :"<<endl;
    int a,b ; 
    cin>>a>>b;
    cout<<"Before swapping : a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping : a = "<<a<<" and b = "<<b<<endl;
    return 0;
}
