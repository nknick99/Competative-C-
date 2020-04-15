/*
Palindrome LinkedList
Check if a given linked list is palindrome or not. Return true or false.
Indexing starts from 0.
Input format :
Linked list elements (separated by space and terminated by -1)
Sample Input 1 :
9 2 3 3 2 9 -1
Sample Output 1 :
true
Sample Input 2 :
0 2 3 2 5 -1
Sample Output 2 :
false
*/
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

    if(*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

//check if the LL is Palindrome by using stack
bool palindrome(node* head)
{
    node* temp = head;//temp node
    //declare a stack
    stack <int> s;
    //pushing the elements of LL in Stack
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp = temp->next;
    }

    //check if it is palindrome by comparing the stack and the LL
    while(head!=NULL)
    {
        int i = s.top();//get the top most element
        //pop out the element
        s.pop();
        //check if it equals to the element of LL(traversing forward)
        if(head->data!=i)
        {
            return false;
        }
        head=head->next;
    }
    return true;

}

//display the elements
/*
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
*/

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
    if(palindrome(start))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}
