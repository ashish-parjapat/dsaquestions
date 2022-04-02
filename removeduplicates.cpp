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
	cout<<endl;
}
bool floyddetection(node*head){
	node*slow=head;node*fast=head;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return true;
		
		}
	}
	return false;
}





int main(){
	node*head=new node(10);
	head->next=new node(20);
	head->next->next=new node(20);
	head->next->next->next=new node(30);
	head->next->next->next->next=new node(30);
	head->next->next->next->next->next =new node(30);
	head->next->next->next->next->next->next=head->next;
	//cout<<head->next->next->next->next->next->next->data;

	printl(head);
	floyddetection(head);
	





	}
