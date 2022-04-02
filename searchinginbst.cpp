#include<bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node*right;
	node*left;
	node(int k){
		key=k;
		left=right=NULL;

	}};
	bool searching(node*root,int x){
		if(root->key==x){
			return true;

		}else if(root->key>x){
		   return searching(root->left,x);}
		   else {
		   	return searching(root->right,x);

		   }

	}






int main(){
	node *root=new node(8);
	root->left=new node(3);
	root->left->left=new node(1);
	root->left->right=new node(5);
	root->left->right->left=new node(4);
    root->left->right->right=new node(6);
    root->right=new node(9);
    root->right->right=new node(10);
    cout<< searching(root,5);

}