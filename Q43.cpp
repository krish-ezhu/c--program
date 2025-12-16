//Write a C++ program to check whether a given number is a Strong Number or not.
#include <iostream>
using namespace std;

int main() {
    int num, original, digit, sum = 0, fact;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        digit = num % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        num /= 10;
    }

    if (sum == original)
        cout << "Strong number";
    else
        cout << "Not a Strong number";

    return 0;
}
