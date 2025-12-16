// Write a C++  program to check whether a given number is prime or not.
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            count++;
    }

    if (count == 2)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}
