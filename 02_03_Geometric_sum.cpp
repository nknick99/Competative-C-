/*
Geometric Sum
Given k, find the geometric sum i.e.1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)using recursion.
Return the answer.
*/
#include <iostream>
//geometric sum using recursion
using namespace std;
float geometric_sum(int no)
{
    if(no==0)
    {
        return 1;
    }
    return 1 + 0.5*(geometric_sum(no-1));
}
int main()
{
    int no;
    cin>>no;
    cout<<geometric_sum(no);
    return 0;
}
