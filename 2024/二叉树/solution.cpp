#include<bits/stdc++.h>
using namespace std;
struct tree{
	char val;
	tree *Lchild;
	tree *Rchild;
};
tree *createTree(char val);
tree *preorderCreate();
void preorderOutput(tree *root);
void inorderOutput(tree *root);
void postorderOutput(tree *root);
char a[10000];
int count_a=0;
int main(){
	
	
	cin>>a;
	tree *root=preorderCreate();
	
	preorderOutput(root);
	cout<<endl;
	inorderOutput(root);
	cout<<endl;
	postorderOutput(root);
	cout<<endl;
	
	return 0;
}
tree *createTree(char val){
	tree *root=new tree();
	root->val=val;
	root->Lchild=NULL;
	root->Rchild=NULL;
	return root;
}
tree *preorderCreate(){
	tree *root=NULL;
	if(a[count_a]!='#'&&a[count_a]!='\0'){
		root=createTree(a[count_a++]);
		root->Lchild=preorderCreate();
		root->Rchild=preorderCreate();
	}else if(a[count_a]=='#'){
		count_a++;
	}
	return root;
}
void preorderOutput(tree *root){
	if(root!=NULL){
		cout<<root->val<<' ';
		preorderOutput(root->Lchild);
		preorderOutput(root->Rchild);
	}
}
void inorderOutput(tree *root){
	if(root!=NULL){
		inorderOutput(root->Lchild);
		cout<<root->val<<' ';
		inorderOutput(root->Rchild);
	}
}
void postorderOutput(tree *root){
	if(root!=NULL){
		postorderOutput(root->Lchild);
		postorderOutput(root->Rchild);
		cout<<root->val<<' ';
	}
}
