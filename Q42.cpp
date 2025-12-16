//Write a C++ program to check whether a given integer is a perfect square or not.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    int root;

    cout << "Enter a number: ";
    cin >> num;

    root = sqrt(num);

    if (root * root == num)
        cout << "Perfect square";
    else
        cout << "Not a perfect square";

    return 0;
}
