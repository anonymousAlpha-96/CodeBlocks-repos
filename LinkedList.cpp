//Program for Linked List in simple way


#include<iostream>
using namespace std;


//Class declaration for Node details
class Node
{
public:
    int data;   //data of LL
    Node* next; //address of LL

    Node(int val) //Constructor of Node
    {
        data = val;
        next = NULL;
    }
};

//Inserting data at the top/ front/ head
void insertAtHead(Node* &head, int val)
{
    Node* n = new Node(val);

    n->next = head;
    head = n;
}

//inserting at the End/ bottom/ tail
void insertAtTail(Node* &head, int val)
{
    Node* n = new Node(val);

    if(head==NULL)
    {
        head =n;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp =temp->next;
    }
    temp->next=n;
}

//displaying all the data
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head =NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 4);
    insertAtHead(head, 8);
    insertAtTail(head, 25);
    display(head);
    insertAtHead(head, 18);
    display(head);
    return 0;
}
