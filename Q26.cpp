//Write a C++ Program to check whether the last digit of a number is odd or even.

#include <iostream>
using namespace std;

int main() {
    int num, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    // Get the last digit
    lastDigit = num % 10;

    if (lastDigit % 2 == 0)
        cout << "The last digit " << lastDigit << " is Even";
    else
        cout << "The last digit " << lastDigit << " is Odd";

    return 0;
}
