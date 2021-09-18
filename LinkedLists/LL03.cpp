#include <bits/stdc++.h>
using namespace std;
//Doubly-Linked List
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_beginning(Node* head, int data)
{
    if(head->next!=NULL){
        Node* temp = new Node();
        temp->data = data;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }else{
        Node* temp = new Node();
        temp->data = data;
        head = temp;
    }
}


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//code goes here
 
 
return 0;
}