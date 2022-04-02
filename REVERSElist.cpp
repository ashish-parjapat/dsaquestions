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

/*    std::vector<int> v;
    Node*curr=head;
    while(curr!=NULL){
        v.push_back(curr->data);
        curr=curr->next;
    }for(curr=head;curr!=NULL;curr=curr->next){
        curr->data=v.back();
        v.pop_back();
    }
    return head;
}*/
Node *reverselist(Node*head){
    Node*curr=head;
    Node*prev=NULL;
    while(curr!=NULL){
        Node*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    return prev;
}



int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	printlist(head);
    head=reverselist(head);
    printlist(head);
	
	return 0;
} 
