// Floyd's algorithm , Hare and Tortoise Alogorithm

#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(node* head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void inseartAtTail(node* &head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void makeCycle(node* &head,int pos)
{
    node* temp = head;
    node* starNode;
    int count = 1;
    while (temp->next!=NULL)
    {
        if(count==pos)
        {
            starNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = starNode;
}

bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow)
        {
            return true;
        }
    }
    return false;  
}

void removeCycle(node* &head)
{
    node* slow = head;
    node* fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);
    fast = head;
    while (slow->next!=fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;

}

int main()
{
    node* head = NULL;
    inseartAtTail(head,1);
    inseartAtTail(head,2);
    inseartAtTail(head,3);
    inseartAtTail(head,4);
    inseartAtTail(head,5);
    inseartAtTail(head,6);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}