#include<bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node*right;
	node*left;
	node(int k){
		key=k;
		right=left=NULL;

	}
}; 
void printLevel(node *root){
    if(root==NULL)return;
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        node *curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
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
    printLevel(root);

}