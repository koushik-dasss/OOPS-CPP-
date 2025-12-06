// Design a class Polar which describes a point in the plane using polar coordinates radius and
// angle. A point in polar coordinates is shown in the figure below. Use the overload + operator
// to add two objects of Polar.
// Figure 1: Polar coordinates of a point
// Note that we cannot add polar values of two points directly. This requires first the conver-
// sion of points into rectangular coordinates, then adding the respective rectangular coordinates
// and finally converting the result back into polar coordinates. You need to use the following
// trigonometric formula:
// x = r * cos(a);
// y = r * sin(a);
// a = atan(y/x); //arc tangent
// r = sqrt(x*x + y*y);
#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;
class Polar{
    float r,a,x,y;
    public:
    Polar(){}
    Polar(float radius , float angle){
        r = radius;
        a=angle*(pi/180); // data member of angle(a) initialized by getting directly converted to radians from degrees
        x=r*cos(a);
        y=r*sin(a);
    }
    void display(){
        cout<<"Radius is " << r<<" and angle is "<<a*(180/pi)<<endl; // radius and angle(in degrees , explicitly converted) are displayed
    }
    Polar operator+(Polar p2){
        Polar ob;
        ob.x = x+p2.x;
        ob.y = y+p2.y;
        ob.r = sqrt(ob.x*ob.x + ob.y*ob.y);
        ob.a = atan(ob.y/ob.x);
        return ob;
    }
};
int main(){
    Polar p1,p2,p3;
    float r1,r2,a1,a2;
    cout<<"Enter the radius and angle for the 1st point :";
    cin>>r1>>a1;
    cout<<"Enter the radius and angle for the 2nd point :";
    cin>>r2>>a2;
    p1 = Polar(r1,a1);
    p2 = Polar(r2,a2);
    p3 = p1+p2;
    p1.display();
    p2.display();
    cout<<"After addition :"<<endl;
    p3.display();
    return 0;
}