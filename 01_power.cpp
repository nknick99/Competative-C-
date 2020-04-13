#include <iostream>
/*
Q1 - Power
Write a program to find x to the power n (i.e. x^n).
Take x and n from the user. You need to return the answer.
Do this recursively.
Input format :Two integers x and n (separated by space)
Output Format :x^n (i.e. x raise to the power n)
*/
//power using recursion
using namespace std;
int power(int b, int a) {
    if (a!= 0)
        return (b * power(b, a - 1)); //if b==2 then 2*a till a becomes 0
    else
        return 1;

}
int main()
{
    int b,ex;
    cin>>b>>ex;
    cout<< power(b,ex);
    return 0;
}
