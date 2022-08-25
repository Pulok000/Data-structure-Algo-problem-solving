//single linklist implementation
#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* next;


    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }

};

void insertNode(Node* &head, int data){

    Node* temp=new Node(data);
    temp -> next = head;
    head = temp;
}

void printLinkList(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
       cout<<temp -> data<<" ";
       temp=temp->next;        
    }
    cout<<"\n";

}


int main()
{


    Node* node1=new Node(10);

    Node* head = node1;

    insertNode(head,11);
    insertNode(head,12);
    insertNode(head,13);
    insertNode(head,14);

    printLinkList(head);






    return 0;
}


