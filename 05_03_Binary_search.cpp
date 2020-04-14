/*
Binary Search (Recursive)
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array
using binary search. Return the index of x.Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :
Line 1 : Array size
Line 2 : Array elements (separated by space)
Line 3 : x (element to be searched)
*/
#include <iostream>

using namespace std;
int bisearch(int high,int arr[],int no,int low)
{
    if(high>=low)
    {
        int mid=(low+high)/2;//middle element
        if(arr[mid]==no)
        {
            return mid;//returns the index of element found
        }
        //checks in left subarray
        if(arr[mid]>no)
        {
            return bisearch(mid-1,arr,no,low);
        }
        //checks in right subarray
        return bisearch(high,arr,no,mid+1);

    }
    //if element is not present
    return -1;
}
int main()
{
    int N,i,no;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cin>>no;
    cout << bisearch(N-1,arr,no,0) << endl;
    return 0;
}
