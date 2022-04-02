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
    node *insert(node*root,int x){
    	if(root==NULL){
    		return new node(x);

    	}if(root->key<x){
    		root->right=insert(root->right,x);

    	}else{
    		root->left=insert(root->left,x);
    	}
    	return root;
    }
    void inorder(node*root){
    	if(root!=NULL){
    		inorder(root->left);
    		cout<<root->key<<" ";
    		inorder(root->right);
    	}
    }

int main(){
	node *root=new node(10);
	root->left=new node(5);
	root->right=new node(15);
	root->right->left=new node(12);
	root->right->right=new node(18);
	int x=20;
	root=insert(root,x);
	inorder(root);

}