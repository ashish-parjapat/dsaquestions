#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

/*void printNthFromEnd(Node * head,int n ){
    Node*curr=head;
    int len=0;
    while(curr!=NULL){
        curr=curr->next;
        len++;

    }
    Node*temp=head;
    for(int i=1;i<len-n+1;i++){
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}*/

void fromlast(node*head,int n){
    node*first=head;
    for(int i=0;i<n;i++){
        first=first->next;
    }
    node*second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->data;

}


int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	printlist(head);
	//cout<<"Nth node from end of Linked List: ";
	fromlast(head,3);
	return 0;
} 
