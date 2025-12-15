//Write a C++ Program to check whether four sides form a square or rectangle.

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter four sides: ";
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d)
        cout << "The given sides form a Square";
    else if (a == c && b == d)
        cout << "The given sides form a Rectangle";
    else
        cout << "The given sides do not form a Square or Rectangle";

    return 0;
}
