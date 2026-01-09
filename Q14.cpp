//Write a C++ Program to print quotient of two numbers.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1,num2,quotient;
    cout<<"Enter a number 1 : ";
    cin>>num1;
    cout<<"Enter a number 2 : ";
    cin>>num2;
    quotient=num1/num2;
    cout<<quotient;
    return 0;
}
