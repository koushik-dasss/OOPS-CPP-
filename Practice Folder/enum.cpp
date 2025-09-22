#include <iostream>
using namespace std;
enum shape{circle,triangle,rectangle};
int main(){
    cout<<"The value of the shape circle is 0"<<endl<<"The value of the shape triangle is  1 "<<endl<<"The value of the shape rectangle is 2"<<endl;
    int a ; 
    cout<<"Enter a value";
    cin>>a;
    switch(a){
        case circle :
        cout<<"The value entered haas the shape circle"<<endl;
        break;
        case triangle:
        cout<<"The value entered haas the shape triangle"<<endl;
        break;
        case rectangle:
        cout<<"The value entered haas the shape rectangle"<<endl;
        break;
        default:
        cout<<"Wrong value entered."<<endl;
    }
    return 0;
}