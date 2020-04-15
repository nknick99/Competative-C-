/*
Midpoint of LL
Given a linked list, find and return the midpoint.
If the length of linked list is even, return the first mid point.
Input format :
Linked list elements (separated by space and terminated by -1)`
Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
3
Sample Input 2 :
1 2 3 4 -1
Sample Output 2 :
2
*/
#include <iostream>

using namespace std;
class node
{
    public:
        int data;
        node* next;
};
//public node start;
node* start=NULL;
//appending the element to the last of the linked list
void append(int data)
{
    node* new_node = new node();//memory allocation
    node* temp = start;
    new_node->data = data;
    new_node->next = NULL;
    //if the LL is empty
    if(start == NULL)
    {
        start = new_node;
    }
    //traverse till last element and then append
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// displaying the reversed elements
int mid_ele_display()
{
    int t_index = 0, index = 0;
    node* temp = start;
    node* temp2 = start;
    while(temp!=NULL)
    {
        t_index++;
        temp=temp->next;
    }
    if(t_index%2==0)
    {
        t_index = (t_index/2) - 1;//for the first even middle no
    }
    else
    {
        t_index = (t_index/2);//for the index of middle element
    }
    while(temp2!=NULL)
    {
        if(t_index == index)
        {
            return temp2->data;
        }
        index++;
        temp2=temp2->next;
    }
}
int main()
{

    int data;
    //append the input to the linked list till we get -1 to terminate
    do
    {
        cin>>data;
        if(data!=-1)
        {
            append(data);
        }
    }while(data!=-1);
    //display mid_ele
    cout<<mid_ele_display()<<endl;
    return 0;
}
