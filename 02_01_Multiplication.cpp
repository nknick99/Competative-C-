/*
Multiplication (Recursive)
Given two integers m & n, calculate and return their multiplication using recursion.
You can only usesubtraction and addition for your calculation.
No other operators are allowed.
Input format :
m and n (in different lines)
*/
#include <iostream>
//multiplication using recursion
using namespace std;
int multiply(int m,int n)
{
    int sum=0;
    //adds the number m, n times.
    if(n>0){
        return (m + multiply(m,n-1));
    }
    else
        return 0;


}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<multiply(m,n)<<endl;
    return 0;
}
