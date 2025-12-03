// Create a class Complex with data members real and imaginary. Initialize two objects of the
// Complex class using constructors. Include a static member function addcomplex() to perform
// the addition of two complex numbers and return the result.
// Sample Run:
// A = 3.12 +j 5.65
// B = 2.75 +j 1.21
// C = 5.87 +j 6.86
// Here, A, B, and C represent the objects of class Complex.
#include <iostream>
using namespace std;
class Complex{
    double real , img;
    public:
        Complex(double r , double i){
            real = r;
            img = i;
        }
        static Complex addComplex(Complex C1 , Complex C2){
            double r = C1.real + C2.real;
            double i = C1.img + C2.img;
            return Complex(r,i);
        }
        void display(){
            cout<<real<<"+j"<<img<<endl;
        }
};
int main(){
    Complex A(3.12,5.65);
    Complex B(2.75,1.21);
    Complex C = Complex :: addComplex(A,B);
    cout<<"A = ";
    A.display();
    cout<<"B = ";
    B.display();
    cout<<"C = ";
    C.display();
    return 0;
}
