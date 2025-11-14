// (b) Write a program that defines a function that receives 4 arguments
// - char, int, float and double in that order. Make 3 calls to this
// function. In the second call, pass only 3 arguments; the last one
// should be taken as 6.28 by default. In the third call, pass only 2
// arguments. In this case the third argument should be taken as 3.14
// and fourth as 6.28 by default. [2]
#include<iostream>
using namespace std;
void show(char c, int i , float f = 3.14 , double d = 6.28){
    cout<<c<<" "<<i<<" "<<f<<" "<<d<<endl;
}
int main(){
    show('A',5,4.5,2.34);
    show('B',6,5.2);
    show('C',2);
    return 0;
}