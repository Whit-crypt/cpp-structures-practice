#include <iostream>
using namespace std;

struct Shape {
    double length;
    double width;
    double radius;
    double height;
};

int main() {
    Shape s;

    // Rectangle
    cout << "Enter rectangle length: ";
    cin >> s.length;

    cout << "Enter rectangle width: ";
    cin >> s.width;

    cout << "Rectangle Area = " << s.length * s.width << endl;

    // Circle
    cout << "\nEnter circle radius: ";
    cin >> s.radius;

    cout << "Circle Area = " << 3.142 * s.radius * s.radius << endl;

    // Cuboid
    cout << "\nEnter cuboid length: ";
    cin >> s.length;

    cout << "Enter cuboid width: ";
    cin >> s.width;

    cout << "Enter cuboid height: ";
    cin >> s.height;

    double cuboidArea = 2 * (
        s.length * s.width +
        s.length * s.height +
        s.width * s.height
    );

    cout << "Cuboid Surface Area = " << cuboidArea << endl;

    // Triangle
    cout << "\nEnter triangle base: ";
    cin >> s.length;

    cout << "Enter triangle height: ";
    cin >> s.height;

    cout << "Triangle Area = "
         << 0.5 * s.length * s.height << endl;

    return 0;
}
