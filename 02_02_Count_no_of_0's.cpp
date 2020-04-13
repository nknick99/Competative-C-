/*
Count Zeros
Given an integer n, count and return the number of zeros that are present in the given integer using
recursion.
Input Format :
Integer n
Output Format :
No. of 0s
*/
#include <iostream>
//no of zeroes
using namespace std;
int no_of_zeroes(int no)
{
    //exceptional case if the given no is 0 then the program will return 0 no of 0's
    //if the division of given no is 0
    if(no==0){
        return 0;
    }
    //if given no divides completely by 10 then add the count
    if(no%10==0)
    {
        return 1 + no_of_zeroes(no/10);
    }
    //keep dividing till we get 0
    else
    {
         return no_of_zeroes(no/10);
    }
}
int main()
{
    int no;
    cin>>no;
    cout<<no_of_zeroes(no)<<endl;
    return 0;
}
