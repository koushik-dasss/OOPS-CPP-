// 6.2 Extend the above program to display the area of circles. This requires addition of a new derived
// class ‘circle’ that computes the area of a circle. Remember, for a circle we need only one value,
// its radius, but the get data() function in base class requires two values to be passed.(Hint:
// Make the second argument of get data() function as a default one with zero value.)
#include<iostream>
#include<cmath>
#define pi 3.14 
using namespace std;
class shape{
    protected:
    double x,y;
    public:
    void getData(double a, double b = 0){
        x=a;
        y=b;
    }
    virtual void displayArea(){ }
};
class circle : public shape{
    public:
    void displayArea(){
        cout<<"Area of the circle: "<< pi*x*x<< endl;
    }
};
class triangle : public shape{
    public:
    void displayArea(){
        cout<<"Area of the triangle: "<< 0.5*x*y<< endl;
    }
};
class rectangle : public shape{
    public:
    void displayArea(){
        cout<<"Area of the rectangle: "<< x*y<< endl;
    }
};
int main(){
    shape *ptr;
    circle ob1;
    ptr = &ob1;
    ptr -> getData(3.79);
    ptr -> displayArea();
    triangle ob2;
    ptr = &ob2;
    ptr -> getData(12.3,13.5);
    ptr -> displayArea();
    rectangle ob3;
    ptr = &ob3;
    ptr -> getData(13.5,7.9);
    ptr -> displayArea();
    return 0;
}