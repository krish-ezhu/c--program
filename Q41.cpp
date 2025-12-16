// Write a C++  program to find the sum of all factors of a given number.
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            sum += i;
    }

    cout << "Sum of all factors = " << sum;

    return 0;
}
