//Write a C++ Program to check whether two numbers have the same last digit.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num1 % 10 == num2 % 10)
        cout << "Both numbers have the same last digit";
    else
        cout << "Both numbers do not have the same last digit";

    return 0;
}
