
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-03 21:23:56
Version: 1.0
**************************************************************/
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
struct Tree{
	Tree *left;
	Tree *right;
	int data;
};

vector<int> pro,pos,proM,posM,origin;
void insert(Tree* root,int k){
	if(root == NULL){
		root = new Tree;
		root->data = k;
		root->left = NULL;
		root->right = NULL;
	}else{
		if(root->data > k )insert(root->left,k);
		else insert(root->right,k);
	}
	return;
}

void proTree(Tree *root){
	if(root==NULL)return;
	pro.push_back(root->data);
	proTree(root->left);
	proTree(root->right);
}
void posTree(Tree *root){
	if(root==NULL)return;
	pos.push_back(root->data);
	posTree(root->right);
	posTree(root->left);
}
void proMTree(Tree *root){
	if(root==NULL)return;
	proMTree(root->left);
	proMTree(root->right);
	proM.push_back(root->data);
}
void posMTree(Tree *root){
	if(root==NULL)return;
	posMTree(root->right);
	posMTree(root->left);
	posM.push_back(root->data);
} 
int main(){
	int n;
	cin >> n;
	Tree *root = NULL;
	for(int i = 0 ; i < n ; i++){
		int temp;
		cin >> temp;
		insert(root,temp);
		origin.push_back(temp);
	}
	proTree(root);
	posTree(root);
	proMTree(root);
	posMTree(root);
	
	if(pro == origin){
		printf("YES\n%d",proM[0]);
		for(int i = 1 ; i < n ; i++){
			printf(" %d",proM[i]);
		}
	}else if(pos == origin){
		printf("YES\n%d",posM[0]);
		for(int i = 1 ; i < n ; i++){
			printf(" %d",posM[i]);
		}
	}else{
		printf("NO\n");
	}
}
 
	
