#include <iostream>
using namespace std;
class Circle
{
    double radius;
public:
    Circle (double r) : radius(r){}
    double area() {return radius*radius*3.141;}
};
class Cylinder
{
    Circle base;
    double height;
public:
    Cylinder (double b,double h) : base(b),height(h){};
    double volume() {return base.area()*height;}
};
int main()
{
    Cylinder cy(10,20);
    Circle ci(10);
    cout<<endl<<"The volume of the cylinder is :"<<cy.volume();
    cout<<endl<<"The area of the circle is :"<<ci.area();
    return 0;
}
