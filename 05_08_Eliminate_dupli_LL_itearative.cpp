/*
Eliminate duplicates from LL
Given a sorted linked list (elements are sorted in ascending order). Eliminate duplicates from the
given LL, such that output LL contains only unique elements.
You don't need to print the elements, just remove duplicates and return the head
of updated LL.
Input format :
Linked list elements (separated by space and terminated by -1)
Sample Input 1 :
1 2 3 3 3 4 4 5 5 5 7 -1
Sample Output 1 :
1 2 3 4 5 7
*/

#include <iostream>

using namespace std;

class node
{
    public:
        int data;
        node* next;
};
//appending the data at the end of linked list
void append(node** start, int data)
{
        node* new_node = new node();
        node *temp = *start;

        new_node->data = data;
        new_node->next = NULL;
        //if the LL is empty
        if(*start==NULL)
        {
            *start = new_node;
        }
        else
        {
            //traversing till the last node
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
}
//displaying the final linked list
void display(node** start)
{
        node *temp = *start;

        while(temp->next!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}
//deleting the node
void del(node** f_node, node** n_node)
{
    node *temp = *f_node;
    node *temp2 = *n_node;
    temp->next = temp2->next;
}

//Eliminating the duplicates from the linked list
void eliminate_duplicates(node** start)
{
        node *temp = *start;
        node *temp2 = *start;
        //if the linked list is empty
        if(*start == NULL)
        {
            return;
        }
        //traverse and find if the elements are same
        while(temp->next!=NULL)
        {
            temp2 = temp->next;
            //if the data is same then delete the node
            if(temp->data==temp2->data)
            {
                del(&temp,&temp2);
            }
            //follow the node
            else
            {
                temp=temp->next;
            }
        }

}

int main()
{
    int data;
    node* start = NULL;
    do
    {
        cin>>data;
        append(&start,data);
    }while(data!=-1);
    eliminate_duplicates(&start);
    display(&start);
    return 0;
}
//end main
