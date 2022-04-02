#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node*next;
	node(int x){
		data=x;
		next=NULL;
	}
};
  node*kthdelte(node*head,int k){
    node*curr=head;
   for(int i=0;i<k-2;i++){
    curr=curr->next;
   }
   curr->next=curr->next->next;
   return head;

  }

  

  



  void printl(node*head){
  	node*curr=head;

  	do{
  		
  		cout<<curr->data<<" ";
  		curr=curr->next;

  	}while(curr!=head);
  	cout<<"\n";
  }





int main(){
	node*head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	head->next->next->next=new node(40);
		head->next->next->next->next=head;
		//cout<<head->next->next->next->next;
		printl(head);
		//begincircular(head,500);
    head=kthdelte(head,4);
		printl(head);
		//cout<<cout<<head->next->next->next->next->next->data;
	
}