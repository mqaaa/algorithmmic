
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-10 11:19:32
Version: 1.0
归并算法和直接插入算法 
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int n;
int t1[105] = {0}; 
int t2[105] = {0}; 
int t3[105] = {0};
void print(){
	printf("%d",t2[0]);
	for(int i = 1 ; i < n ; i++){
		printf(" %d",t2[i]);
	}
}
int main(){
	int i;
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++){
		scanf("%d",&t1[i]);
	}
	for(i = 0 ; i < n ; i++){
		scanf("%d",&t2[i]);
	}
	//t3 = t2;
	int p = -1;
	for(i = 1 ; i < n ; i++){
		if(t2[i-1]>t2[i] && p==-1){
			p = i;
			//cout << p << endl;
		}
		if(p!=-1){
			if(t1[i]!=t2[i]){
				//cout << t1[i] << " "<<t2[i]<<endl;
				break;break;
			}
		}
	}
	if(i==n){
		printf("Insertion Sort\n");
		//cout << p << endl;
		int k = t1[p]; 
		//cout << k << endl;
		for(i = p-1 ; i >=0 ; i--){
			//cout << t2[i] << " " << k <<endl;
			if(t2[i]>k)t2[i+1]=t2[i];
			else{
				t2[i+1] = k;
				break;
			}
		}
		if(i==-1)t2[0]=k;
		print();
	}else{
		printf("Merge Sort\n");
		vector<int> v1,v2;
		for(int i = 0 ; i < n ; i++){
			v1.push_back(t1[i]);
			v2.push_back(t2[i]);
		}
		bool  key = false;
		int j;
		int c = 0;
		for(j = 2 ; j < n ; j = j*2){
			c = 0;
			//cout << j << endl;
			for(int k = j ; k < n ; k = k+j){
				sort(v1.begin()+c,v1.begin()+k);
				c = k;
			}
			sort(v1.begin()+c,v1.end());
			//for(i = 0 ; i < n ; i++)cout << " "<<v1[i];	
			if(key)break;
			if(v1==v2)key=true;
		}
		cout<<v1[0];
		for(i = 1 ; i < n ; i++)cout << " "<<v1[i];	
	}
	return 0;
}
	
