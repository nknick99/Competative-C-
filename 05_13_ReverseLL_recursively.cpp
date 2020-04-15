/*
Code : Reverse LL (Recursive)Given a linked list, reverse it using recursion.
Just reverse the LL duplicates and return the head of updated LL.
Input format :
Linked list elements (separated by space and terminated by -1)
Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
5 4 3 2 1
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

//reversing the linked list
void reverse_LL(node** curr_node)
{
    node *temp = *curr_node;
    //if the traversing reaches last element
    if(temp->next==NULL)
    {
        //last element to be the start of new LL
        start = temp;
        return;
    }
    //traversing till last element
    reverse_LL(&(temp->next));
    //traversing back from the last
    //temp2 will be the next element from prev LL
    node* temp2 = temp->next;
    //assigning the next element backward
    temp2->next = temp;
    temp->next = NULL;
}
// displaying the reversed elements
void display(node** start)
{
    node *temp = *start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
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
    reverse_LL(&start);
    display(&start);
    return 0;
}
