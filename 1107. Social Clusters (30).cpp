
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-05 20:13:35
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <set> 
#include <vector>
#include <algorithm>
using namespace std;
vector<set<int> > v;
int pos[1000];
set<int>::iterator it;
int main(){
	int n;
	int key,temp;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)pos[i]=0;
	for(int i = 0 ; i < n ; i++){
		scanf("%d:",&key);
		int post[1000];
		for(int j = 0 ; j < key ; j++){
			scanf("%d",&post[j]);
		}
		int num = v.size();
		if(num > 0){
			int h = 0;
			for(int k = 0 ; k < num ; k++){
				for(int f = 0 ; f < key ; f++){
					if(v[k].count(post[f])){
						pos[k]++;
						for(; h < key ; h++){
							v[k].insert(post[h]);
						}
					}
				}
			}
			if(h == 0){
				set<int> s;
				for(int n = 0 ; n < key ; n++){
					s.insert(post[n]);
				}
				v.push_back(s);
				pos[i]++;
			}
		}else{
			set<int> s;
			for(int n = 0 ; n < key ; n++){
				s.insert(post[n]);
			}
			v.push_back(s);
			pos[0]++;
		}
		
	}
	int index = 0;
	for(int i = 0 ; i < n ; i++){
		if(pos[i]>0)pos[index++]=pos[i];
	}
	cout << index <<endl;
	sort(pos,pos+index);
	for(int g = index-1 ; g > 0 ; g--)printf("%d ",pos[g]);
	printf("%d",pos[0]);
	return 0;
}
	
