#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1,num2,new1,new2,sum;
    cout<<"Enter a number 1 : ";
    cin>>num1;
    cout<<"Enter a number 2 : ";
    cin>>num2;
    new1=num1%10;
    new2=num2%10;
    sum=new1+new2;
    cout<<" Sum last Digits : "<<sum;
    return 0;
}