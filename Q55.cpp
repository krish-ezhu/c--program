// Write a C++ program to print ASCII values from A–Z.
#include <iostream>
using namespace std;

int main() {
    char ch;

    for (ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " = " << int(ch) << endl;
    }

    return 0;
}
