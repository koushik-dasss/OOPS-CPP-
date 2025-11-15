// Define a function show() that takes string, int, char.

// Call 1 → pass all 3 arguments

// Call 2 → pass string, int only (char = 'X' default)

// Call 3 → pass only string (int = 0, char = 'X' default)
#include<iostream>
using namespace std;
void show(string s , int i = 0 , char ch = 'X'){
    cout<<s<<" "<<i<<" "<<ch<<endl;
}
int main(){
    show("kd",2,'Y');
    show("kd",3);
    show("kd");
    return 0;
}