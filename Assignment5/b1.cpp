#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    const double pi = 3.14159;

public:
    Circle()
    {
        radius = 0.0;
    }
    Circle(double r)
    {
        radius = r;
    }
    void setRadius(double r)
    {
        radius = r;
    }
    double getRadius() const
    {
        return radius;
    }
    double getArea() const
    {
        return pi * radius * radius;
    }
    double getDiameter() const
    {
        return radius * 2;
    }
    double getCircumference() const
    {
        return 2 * pi * radius;
    }
};

int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle myCircle(radius);
    cout << "Area: " << myCircle.getArea() << endl;
    cout << "Diameter: " << myCircle.getDiameter() << endl;
    cout << "Circumference: " << myCircle.getCircumference() << endl;

    return 0;
}
