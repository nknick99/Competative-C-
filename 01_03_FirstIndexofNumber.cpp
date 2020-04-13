/*
Q3 - First Index of Number
Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array.
Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
first index or -1
*/
#include <iostream>
//returns the first index of a number present
using namespace std;
int posfirst(int N,int arr[],int X,int curr_index)
{
    //checks if the element is not present
    if(curr_index==N)
    {
        return -1;
    }
    //checks if the element is present at the current index and returns the first position
    if(X==arr[curr_index])
    {
        return curr_index;
    }
    //checks for the next index of the array if x is present.
    return posfirst(N,arr,X,curr_index+1);
}
int main()
{
    int N,x,i;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    cout<<posfirst(N,arr,x,0)<<endl;
}
