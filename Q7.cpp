//Write a C++ Program to print the given integer number in hexadecimal format.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<hex<<num;
    return 0;
}
