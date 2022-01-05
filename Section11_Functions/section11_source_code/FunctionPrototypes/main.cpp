// Section 11
// Function Prototypes
// Area of Circle and Volume of a Cylinder
#include <iostream>

using namespace std;

// Function prototypes
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double);
void area_circle();
void volume_cylinder();

const double pi = 3.14159;

int main() {
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_volume_cylinder(double radius, double height) {
   // return pi *radius * radius * height;
   return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

void area_circle() {
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}
