//Basic operations on a linked list

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

//delete a node by passing a key 
void del_key(Node **head, int key)
{
    Node* temp = (*head);
    Node *prev = new Node();
    //check if head itself holds the key
    if (temp!=NULL && temp->data == key){
        *head = temp->next;
        delete temp;
        return;
    }
    //search for the key 
    while(temp->next!=NULL && temp->data!=key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
        return;
    prev->next = temp->next;
    delete temp;
    return;

}

//delete a node by passing a position

void del_pos(Node **head, int position){
    //check if Linked List is empty
    Node *head_ref = *head;
    Node *prev = new Node();
    if(head_ref == NULL){
        return;
    }
    //check if he wants to delete the head node
    if(position==0){
        (*head) = head_ref->next;
        delete head_ref;
        return;
    }
    for(int i=0; i<position && head_ref!=NULL; i++)
    {
        prev = head_ref;
        head_ref = head_ref->next;
    }
    //ensure we are not going out of the Linked List
    if(head_ref == NULL || prev->next == NULL)
        return;
    prev->next = head_ref->next;
    delete head_ref;
    return;
}


void insert_after(Node *reference, int x)
{
    Node *new_node = new Node();
    new_node->data = x;
    new_node->next = reference->next;
    reference->next = new_node;

}

void push(Node **head, int x)
{
    Node* new_node = new Node();
    new_node->data = x;
    new_node->next = (*head);
    (*head) = new_node;
    cout<<"Pushed "<<x<<" at the beginning of the LL"<<endl;
}

void append(Node **head, int x)
{
    Node* new_node = new Node();
    new_node->data = x; new_node->next = NULL;
    Node* last = (*head);
    if((*head)==NULL){
        (*head) = new_node;
        cout<<"Created new node and inserted "<<x<<endl;
        return;
    }
    while(last->next!= NULL){
        last = last->next;
    }
    last->next = new_node;
    cout<<"Appended "<<x<<" to the end of LL"<<endl;
    return;
}

void print_ll(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


//printing the length of a linked list
int length(Node* head){
    int count = 0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

//search in a Linked List
bool present(Node *head, int x){
    while(head!=NULL){
        if(head->data == x)
            return true;
        head = head->next;
    }
    return false;
}

//find Nth node in a LinkedList

int find(Node *head, int N)
{
    //check wether Linked list is empty
    if(head==NULL) cout<<"Linked list is Empty\n";
    //traverse through the Linked list according to the index
    for(int i=0; i<N-1; i++)
    {
        head = head->next;
    }
    cout<<"\nElement in Node "<<N<<" is "<<head->data<<endl;
    return head->data;
}

//print the middle element of the LinkedList
void print_m(Node* head)
{
    int n = length(head);
    find(head, n/2 + 1);
    

}

//Finding whether a loop is present in Linked List

bool loop(Node* head)
{
    //Method 1: Using a hash table 
    // set<Node*> table;
    // while(head!=NULL){
    //     if(table.find(head)!=table.end())
    //     {
    //         return true;
    //     }else{
    //         table.insert(head);
    //         head = head->next;
    //     }
    // }
    // return false;

    //method 2: Using slow and fast pointers (This is the fastest method)
    Node* slow_p, *fast_p = head;
    
    while(slow_p&&fast_p&&fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if(slow_p == fast_p)
        {
            return true;
        }
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//code goes here
Node *head = new Node();
push(&head, 1);
push(&head, 2);
push(&head, 3);
push(&head, 4);
int size=(sizeof(Node));
append(&head,1);
append(&head,2);
append(&head,3);
insert_after(head, 5);
print_ll(head);
cout<<"\n";
del_key(&head, 5);
del_pos(&head, 4);
cout<<"========= After DELETION =========\n";
print_ll(head);
del_pos(&head, 6);
cout<<"\n========= After DELETION =========\n";
print_ll(head);
cout<<"\nLength of the Linked List is: \n"<<length(head)<<endl;
cout<<present(head, 8);
find(head, 6);
append(&head, 5);
append(&head, 7);
append(&head, 8);
print_ll(head);
print_m(head);
cout<<loop(head)<<endl;

return 0;
}