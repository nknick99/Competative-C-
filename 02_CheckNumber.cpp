/*
Q2 - Check Number
Given an array of length N and an integer x, you need to find if x is present in the array or not.
Return true or false.Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :true or false
*/
#include <iostream>
//check if no is present or not in an array using recursion
using namespace std;
int check(int n,int a[],int no)
{
    //checks if x is not present (after completion of scanning all elements)where n is the total no of elements
    if(n==0)
    {
        return 0;
    }
    //checks if the last element == the given key no
    if(no==a[n])
    {
        return 1;
    }
    //removes the last element from scanning
    else
    {
        return check(n-1,a,no);
    }

}
int main()
{
    int n,no,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>no;
    if(check(n,a,no)==1){
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;

}
