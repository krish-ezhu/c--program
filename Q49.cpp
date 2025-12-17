//Write a C++ program to check whether a given integer is a power of 2 or not.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0 && (num & (num - 1)) == 0)
        cout << "It is a power of 2.";
    else
        cout << "It is not a power of 2.";

    return 0;
}
