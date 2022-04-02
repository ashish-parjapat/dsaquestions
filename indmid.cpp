#include<iostream>
using namespace std;
struct node{
	node*next;
	int data;
	node(int x){
		data=x;
		next=NULL;
	}
};

void printl(node*head){
	node*curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<"\n";
}
void midele(node*head){
	node*curr=head;
	node*slow=curr;
	node*fast=curr;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<slow->data<<" ";
}




int main(){
	node*head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	head->next->next->next=new node(40);
	head->next->next->next->next=new node(50);
	printl(head);
	midele(head);
	
	



}
