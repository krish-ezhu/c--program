// Write a C++ program to check whether a given number is a Neon Number or not.
#include <iostream>
using namespace std;

int main() {
    int num, square, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    while (square != 0) {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }

    if (sum == num)
        cout << "Neon number";
    else
        cout << "Not a Neon number";

    return 0;
}
