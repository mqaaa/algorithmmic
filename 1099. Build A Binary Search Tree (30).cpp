
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-04 16:26:42
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>
using namespace std;
struct Tree{
	Tree *le;
	Tree *ri;
	int data;
};
struct Post{
	int a;
	int b;
};
vector<Post> v;
queue<Tree *> q;
int n;
int pos[105];
int index = 0;
bool key = true;
Tree *Tr = NULL;
Tree* buildTree(Tree *root,int k){
	root = new Tree;
	root->data = k;
	root->le = root->ri = NULL;
	if(v[k].a != -1){
		root->le = buildTree(root->le,v[k].a);
	}
	if(v[k].b != -1){
		root->ri = buildTree(root->ri,v[k].b);
	}
	return root;
}
void inOrder(Tree *root){
	if(root == NULL)return;
	inOrder(root->le);
	root->data = pos[index++];
	inOrder(root->ri);
}
void printLevelOrder(){
	while(!q.empty()){
		Tree *root = q.front();
		if(key == true){
			printf("%d",root->data);
			key = false;
		}else printf(" %d",root->data);
		q.pop();
		if(root->le!= NULL)q.push(root->le);
		if(root->ri!= NULL)q.push(root->ri);
	}
	
}
int main(){
	scanf("%d",&n);
	Post x;
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d",&x.a,&x.b);
		v.push_back(x);		
	}
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&pos[i]);
	}
	sort(pos,pos+n);
	Tr = buildTree(Tr,0);
	q.push(Tr);
	inOrder(Tr);
	printLevelOrder();
}
	
