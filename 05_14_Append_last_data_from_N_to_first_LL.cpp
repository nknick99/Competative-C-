/*
AppendLastthedatafromNToFirst
Given a linked list and an integer N, append the last elements from the data N of the LL to front.
Indexing starts from 0. You don't need to print the elements, just update the
elements and return the head of updated LL.
Assume given n will be smaller than length of LL.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)`
Sample Input 1 :
1 2 3 4 5 -1
3
Sample Output 1 :
3 4 5 1 2
*/
//we can solve the problem using stack
#include <iostream>
#include <stack>

using namespace std;

class node
{
public:
    int data;
    node* next;
};

//appending to the last element
void append(node** head, int data)
{
    node* new_node = new node();
    node *temp = *head;

    new_node->data = data;
    new_node->next = NULL;
    //if the LL is empty
    if(*head == NULL)
    {
        *head = new_node;
    }
    //traversing till the last element and then appending
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
//pushing to the front of LL
void push_to_front(node** head, int data)
{
    node* new_node = new node();

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

//remove last N elements which are pushed to the front of LL
void remove_last(node** head,int last)
{
    node *temp = *head;
    //traversing till we get the previous element of the input element
    //last element of new linkedlist
    while(temp->data!=last)
    {
        temp = temp->next;
    }
    //assigning null to the last element of new Linked list
    temp->next = NULL;
}

//storing the last nodes from the given input N in stack
void last_N_nodes(node** head, int num)
{
    node *temp = *head;//temp node
    //declare a stack
    stack <int> s;
    int t_data;//storing the last element of new LL
    //checking till the n element
    while(temp->data!=num)
    {
        t_data = temp->data;
        temp = temp->next;
    }
    //pushing the elements from n to stack
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }
    //pushing the elements of the stack to from first
    while(s.empty()!=true)
    {
        int i = s.top();//get the top most element
        //pop out the element
        s.pop();
        //push the top element to the LL from first
        push_to_front(head,i);
    }
    //to remove the last n elements which are repeated
    remove_last(head,t_data);

}

//display the elements

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main()
{
    int data,num;
    node* start = NULL;
    do
    {
        cin>>data;
        if(data!=-1)
        {
            append(&start,data);
        }
    }while(data!=-1);
    cin>>num;
    last_N_nodes(&start, num);
    display(start);
    return 0;
}
