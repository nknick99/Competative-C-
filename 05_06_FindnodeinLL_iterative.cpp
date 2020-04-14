/*
Find a node in LL
Given a linked list and an integer n you need to find and return index where n is present in the LL. Do
this iteratively.
Return -1 if n is not present in the LL.
Indexing of nodes starts from 0.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer n
Output format :
Index
*/

#include <iostream>

using namespace std;
//class node
class node
{
    public:
        int data;
        node *next;
};
void push(node** start,int new_key)
{
    node* new_node= new node();//to assign memory
    node *temp = *start;
    new_node->data=new_key;
    new_node->next=NULL;
    //for the firstnode
    if(*start==NULL)
    {
        *start=new_node;
    }
    //appending at the end of the last node
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
}


int find_index(node **start,int data)
{
    int index=0;
    node *temp= *start;
    //traversing till we get data
    while(temp->data!=data)
    {
        index++;
        temp=temp->next;
    }
    //returning the index no of the found element
    return index;
}

int main()
{
    int data,index_of_no,num;
    node* start=NULL;
    do
    {
        cin>>data;
        push(&start,data);
    }while(data!=-1);
    cin>>num;
    cout<<find_index(&start,num)<<endl;
    return 0;
}
