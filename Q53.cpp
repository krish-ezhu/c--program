//Write a C++ program to print lowercase English alphabets in reverse order.
#include <iostream>
using namespace std;

int main() {
    for (int i = 122; i >= 97; i--) {
        cout << char(i) << " ";
    }
    return 0;
}
