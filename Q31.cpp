//Write a C++ Program to check whether the sum of three angles forms a valid triangle.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three angles of the triangle: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && (a + b + c == 180))
        cout << "The angles form a valid triangle";
    else
        cout << "The angles do not form a valid triangle";

    return 0;
}
