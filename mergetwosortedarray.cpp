#include<bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node*left;
	node*right;
	node(int k){
		key=k;
		left=right=NULL;
	}




	
};
void inorder(node*root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}

}

void insertion(node*root,int x){
	node*temp=new node(x);
	node*parent=NULL;
	node*curr=root;
	while(curr!=NULL){
		parent=curr;
		if(curr->key<x){
			curr=curr->right;
		}
		else if(curr->key>x){
			curr=curr->left;;
		}
	}
	if(parent->key>x){
		parent->right=temp;
	}else{
		parent->left=temp;
	}
	cout<<endl;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
#endif

	node*root=new node(50);
	root->left=new node(20);
	root->left->left=new node(10);
	root->left->right=new node(20);
	root->right=new node(70);
	root->right->left=new node(60);
	root->right->right=new node(80);
	cout<<"Before inserted element:"<<"\n";
	inorder(root);
	insertion(root,15);
	cout<<"After inserted element:"<<"\n";
	inorder(root);

}