//Write a C++  program to check whether a number is Armstrong number or not.
#include <iostream>
using namespace std;

int main() {
    int num, original, sum = 0, digit;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum += digit * digit * digit; 
        num = num / 10;
    }

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
