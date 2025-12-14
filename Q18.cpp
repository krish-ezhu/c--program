//Write a C++ Program to print the sum of the first and last digit of a 3-digit number.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num,first,last,sum;
    cout<<"Enter a number  : ";
    cin>>num;
    last = num%10;
    first =num%100; 
    sum=first+last;    
    cout<<" Sum  and last Digits : "<<sum;
    return 0;

}

