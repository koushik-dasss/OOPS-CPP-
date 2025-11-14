#include <iostream>
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
    cout<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<a<<" and "<<b<<endl;
    return 0;
}