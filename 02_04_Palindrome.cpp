/*
Check Palindrome (recursive)
Check if a given String S is palindrome or not (using recursion).
Return true or false.
Input Format :
String S
Output Format :
true or false
*/
#include <iostream>
#include <string.h>
using namespace std;
bool ispalindrome(string name, int start,int endofstr)
{
    if(start==endofstr)
    {
        return true;//contain only one element
    }
    if(name[start]!=name[endofstr])
    {
        return false;
    }
    if(start<endofstr+1)
    {
        return ispalindrome(name, start+1, endofstr-1);
    }
    return true;
}
bool palindrome(string name)
{
    int n=name.size();
    if(n==0)
    {
        return true;
    }
    if(ispalindrome(name,0,n-1)==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string name;
    cin>>name;
    if(palindrome(name))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
