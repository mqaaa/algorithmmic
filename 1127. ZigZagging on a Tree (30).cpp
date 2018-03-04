
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-03 16:02:07
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <queue>
#include <cstdlib>
#include <vector>
using namespace std;
const int MAX = 30;
struct Tree{
	Tree *le;
	Tree *ri;
	int data;
};
bool key = true;
Tree *Tr;
int in[MAX],pos[MAX];
int n;
queue<Tree *> que,queM;
vector<int> v1,v2;
Tree *buildTree(int il,int ir,int pl,int pr){
	if(pl>pr)return NULL;
	int p = il;
	while(in[p] != pos[pr])p++;
	
	Tree *root = (Tree *) malloc (sizeof(Tree));
	root->data = in[p];
	root->le = buildTree(il,p-1,pl,pr-ir+p-1);
	root->ri = buildTree(p+1,ir,pr-ir+p,pr-1);
	return root;
	
}
void printLevelTree1(Tree *root){    
    Tree *Tr = NULL;
    que.push(root);
    while(!que.empty()){
        Tree *Tr = que.front();
        que.pop();
        if(Tr==NULL)continue;
        v1.push_back(Tr->data);
        //printf("%d ",Tr->data);
        que.push(Tr->le);
        que.push(Tr->ri);
    }
}
void printLevelTree2(Tree *root){    
    Tree *Tr = NULL;
    que.push(root);
    while(!que.empty()){
        Tree *Tr = que.front();
        que.pop();
        if(Tr==NULL)continue;
        v2.push_back(Tr->data);
        //printf("%d ",Tr->data);
        que.push(Tr->ri);
        que.push(Tr->le);
    }
}
/*
1 11 5 12 17 8 20 15
1 5 11 8 17 12 15 20
*/
void print(int k){
	if(k>=n)return;
	int p = k;
	if(key == true){
		while(v1[p]!=v2[k]){
			printf(" %d",v1[p]);
			p++;
		}
		printf(" %d",v1[p]);
		key = false;
	}else{
		while(v2[p]!=v1[k]){
			printf(" %d",v2[p]);
			p++;
		}
		printf(" %d",v2[p]);
		key = true;
	}
	
	print(++p);
}
int main(){
	int i;
	scanf("%d",&n);
	for( i = 0 ; i < n ; i++)scanf("%d",&in[i]);
	for( i = 0 ; i < n ; i++)scanf("%d",&pos[i]);
	Tree *root =buildTree(0,n-1,0,n-1);
	printLevelTree1(root);
	printLevelTree2(root);
	printf("%d",v1[0]);
	print(1);
	
	return 0;
}
	
