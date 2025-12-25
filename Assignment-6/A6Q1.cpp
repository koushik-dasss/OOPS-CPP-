// 6.1 Create a base class called shape. Use this class to store two double type values that could be
// used to compute the area of figures. Derive two specific classes called triangle and rectangle
// from the base shape. Add to the base class, a member function get data() to initialize base
// class data members and another member function display area() to compute and display the
// area of figures. Make display area() as a virtual function and redefine this function in the
// derived classes to suit their requirements.
// Using these three classes, design a program that will accept dimensions of a triangle or a
// rectangle interactively, and display the area.
// Remember the two values given as input will be treated as lengths of two sides in the case of
// rectangles and as base and height in the case of triangles, and used as follows:
// Area of rectangle = x * y
// Area of triangle = ½* x * y
#include <iostream>
using namespace std;
class shape{
    protected:
    double x,y;
    public:
    void getData(double a , double b){
        x=a;
        y=b;
    }
    virtual void displayArea(){}
};
class triangle : public shape{
    public:
    void displayArea(){
        cout<<"Area of triangle is: "<<0.5*x*y<<endl;
    }
};
class rectangle : public shape{
    public:
    void displayArea(){
        cout<<"Area of rectangle is: "<<x*y<<endl;
    }
};
int main(){
    shape *ptr;
    triangle ob1;
    rectangle ob2;
    ptr = &ob1;
    ptr -> getData(12.3,13.5);
    ptr -> displayArea();
    ptr = &ob2;
    ptr -> getData(13.5,7.9);
    ptr -> displayArea();
    return 0;
}