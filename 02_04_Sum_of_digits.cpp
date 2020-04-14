/*
Sum of digits (recursive)
Write a recursive function that returns the sum of the digits of a given integer.
Sample Input :
12345
Sample Output :
15
*/

#include <iostream>

using namespace std;
int sum(int no)
{
    if(no==0)
    {
        return 0;
    }
    return ((no%10) + sum(no/10));//addition from the last digit to first
}
int main()
{
    int no;
    cin>>no;
    cout<<sum(no);
    return 0;
}
