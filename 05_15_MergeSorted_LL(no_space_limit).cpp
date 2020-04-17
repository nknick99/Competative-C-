/*
Merge Two Sorted LL(no space limit)
Given two linked lists sorted in increasing order.
Merge them in such a way that the result list is also sorted (in increasing order).
You just need to return the head of new linked list,don't print the elements.
Input format :
Line 1 : Linked list 1 elements of length n (separated by space and terminated by -1)
Line 2 : Linked list 2 elements of length m (separated by space and terminated by -1)
Output format :
Merged list elements (separated by space)
//merge two sorted linked list
*/

#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node* next;
};

//appending the data to the following list

void append(node** head,int data)
{
    node* new_node = new node();
    node *temp = *head;

    new_node->data = data;
    new_node->next = NULL;

    if(*head==NULL)
    {
        *head=new_node;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
//print out the two list
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
//function to merge the linked list
void merge_list(node* temp1, node* temp2)
{
    node *f_list = NULL;
    //check if both the lists are empty
    while(temp1!=NULL || temp2!=NULL)
    {

        while(temp1!=NULL && (temp2 == NULL || temp1->data <= temp2->data))
        {
            append(&f_list,temp1->data);
            temp1=temp1->next;
        }
        while(temp2!=NULL && (temp1 == NULL || temp2->data <= temp1->data))
        {
            append(&f_list,temp2->data);
            temp2=temp2->next;
        }
    }
    //display the final list
    display(f_list);
}


int main()
{
    node* list1 = NULL;
    node* list2 = NULL;
    int data;
    //input for list 1
    do
    {
        cin>>data;
        if(data!=-1)
        {
            append(&list1,data);
        }
    }while(data!=-1);

    //input for sorted list 2
    do
    {
        cin>>data;
        if(data!=-1)
        {
            append(&list2,data);
        }
    }while(data!=-1);
    merge_list(list1,list2);
    return 0;
}

