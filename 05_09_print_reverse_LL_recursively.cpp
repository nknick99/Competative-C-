/*
Print reverse LinkedList
Print a given linked list in reverse order. You need to print the tail first and head last. You can’t change
any pointer in the linked list, just print it in reverse order.
Input format :
Linked List elements (separated by space and terminated by -1)
Output format :
Linked List elements in reverse order (separated by space)
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
//appending each element to the end of the LL
void append(node** start, int data)
{
    node* new_node = new node();
    node *temp = *start;
    //creating a new node
    new_node->data = data;
    new_node->next = NULL;
    //if the linked list is empty
    if(*start==NULL)
    {
        *start = new_node;
    }
    //traverse till the last node of the Linked list
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        //assign the new node to the next of last node of LL
        temp->next = new_node;
    }
}

//print the LL in reverse order
void display_reverse(node* start)
{
    //traverse recursively to the last null node
    if(start==NULL)
    {
        return;
    }
    //temp = temp->next;
    display_reverse(start->next);
    cout<<start->data<<" ";
}

int main()
{
    int data;
    node* start = NULL;
    do
    {
        cin>>data;
        if(data!=-1)
        {
            append(&start,data);
        }
    }while(data!=-1);
    display_reverse(start);

    return 0;
}
