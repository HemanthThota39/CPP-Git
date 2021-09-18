#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node **head, int x)
{
    Node *new_node = new Node();
    new_node->data = x;
    //check if LinkedList is empty
    if((*head) == NULL){
        (*head) = new_node;
        cout<<"Created new LinkedList\n";
    }
    new_node->next = (*head);
    (*head) = new_node;
    cout<<"Inserted "<<x<<" at the beginning\n";
}
//delete by key
void del_key(Node *head, int key)
{
    //check if the linked list is empty
    Node *prev = new Node();
    if(head == NULL){
        cout<<"Linked List is empty\n";
        return;
    }
    while(head->next!=NULL && head->data!=key){
        prev = head;
        head = head->next;
    }
    prev->next = head->next;
    delete head;

}

void print_ll(Node* head){
    Node *temp = head;
    while(temp!=NULL && temp->next!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<endl;
    return;
}

//check if the LinkedList is Palindrome

bool is_palindrome(Node* head){
    stack<int> intstack;
    Node* temp = new Node();
    temp  = head;
    while(temp->next!=NULL){
        intstack.push(temp->data);
        temp = temp->next;
    }
    while(head->next!=NULL){
        int x = intstack.top();
        if(x!=head->data){
            return false;
        }else
        head = head->next;
        intstack.pop();
    }
    return true;
}


//reverse a linked list and return the head of linked list
Node* reverse_ll(Node*head)
{
    Node* prev = NULL;
    Node* next = NULL;
    Node* current = head;
    while(current->next!=NULL && current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//code goes here
Node* head = new Node();
push(&head, 1);
push(&head, 2);
push(&head, 3);
push(&head, 4); 
print_ll(head);
print_ll(reverse_ll(head));
return 0;
}