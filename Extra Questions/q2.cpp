// Write a function that receives int, float , double in this order.

// Make 3 function calls:

// 1st call → pass all 3 values

// 2nd call → pass only 2 values (third should be 5.55 by default)

// 3rd call → pass only 1 value (second = 1.1, third = 5.55 by default)

#include <iostream>
using namespace std;
void show(float a , float b = 1.1 , float c = 5.55 ){
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main(){
    show(2,3,4);
    show(2,3,5.55);
    show(2,1.1,5.55);
    return 0;
}