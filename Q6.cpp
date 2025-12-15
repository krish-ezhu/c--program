//Write a C++ Program to print the given fractional number in 2-digit decimal format.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num;
    cout<<"Enter Your CGPA : ";
    cin>>num;
    cout<<" Your CGPA is : "<<fixed<<setprecision(2)<<num;
    return 0;
}
