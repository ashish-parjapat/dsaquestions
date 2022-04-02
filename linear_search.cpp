#include<bits/stdc++.h>
using namespace std;

struct node{
	node*rigth;
	node*left;
	int key;
	node(int k){
		key=k;
		rigth=left=NULL;

	}
};
   void inorder(node*root){
   	if(root!=NULL){
   		inorder(root->left);
   		cout<<root->key<<" ";
   		inorder(root->rigth);
   	}
   }

int main(){
	node*root=new node(20);
	root->left=new node(10);
	root->left->rigth=new node(11);
	root->rigth=new node(12);
	root->rigth->left=new node(11);
	root->rigth->rigth=new node(13);
	inorder(root);



}