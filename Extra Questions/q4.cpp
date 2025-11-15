// Write a function display() that takes char, char, int with default arguments for second char 'Y' and int 10.
// Make 3 calls:

// 1st call: pass all 3

// 2nd call: pass 2

// 3rd call: pass 1
#include <iostream>
using namespace std;
void display(char ch , char cha='Y' ,int i = 10 ){
        cout<<ch<<" "<<cha<<" "<<i<<endl;
}
int main(){
    display('X','Z',90);
    display('A','B');
    display('C');
    return 0;
}