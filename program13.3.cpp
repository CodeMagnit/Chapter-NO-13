/*Write a class circle with one data member radius. Write three member functions get_radius() to set radius value with parameter value, area() to calculate and display area of circleand circum() to calculate and display the circumference of circle*/
#include<iostream>
using namespace std;
// class section
class circle
{
    private:
    float r;
    public:
    void get_radius(float rad)
    {
        r=rad;
    }
    void area()
    {
        cout<<"The Area of Circle = "<<3.14*r*r<<endl;
    }
    void circum()
    {
        cout<<"The Circumferance of Circle = "<<2*3.14*r;
    }
};
// main section

int main()
{
    circle c;
    float r;
    cout<<"Enter Radius: ";
    cin>>r;
    c.get_radius(r);
    c.area();
    c.circum();
    return 0;
}