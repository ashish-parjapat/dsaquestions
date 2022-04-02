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

node*merge(node*head,int y){
	node*temp=new node(y);
if(head==NULL)return temp;
if(y<head->data){
	temp->next=head;
	return temp;
}

	node*curr=head;
	while(curr->next!=NULL&&curr->next->data<y){
		curr=curr->next;
	}
	temp->next=curr->next;
	curr->next=temp;
	return head;

}


void printl(node*head){
	node*curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<"\n";
}


int main(){
	node*head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	head->next->next->next=new node(40);
	printl(head);
	head=merge(head,50);
	printl(head);


}