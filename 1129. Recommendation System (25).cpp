
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-17 18:49:35
Version: 1.0
**************************************************************/
#include <set>
#include <cstdio>
using namespace std;
struct node{
	int value,cnt;
	node(int a,int b):value(a),cnt(b){};
	bool operator <(const node &c) const{
		return cnt != c.cnt ? cnt>c.cnt : value < c.value;
	} 
};
set<node>::iterator it;
int book[50005] = {0};
int main(){
	int n,k,num;
	scanf("%d %d",&n,&k);
	set<node> s;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&num);
		if(i!=0){
			printf("%d:",num);
			int i = 0;
			for(it = s.begin();i < k && it!=s.end() ; i++,it++){
				printf(" %d",it->value);
			}
			printf("\n");
		}
		it = s.find(node(num,book[num]));
		if(it!=s.end())s.erase(it);
		book[num]++;
		s.insert(node(num,book[num]));
	}
	return 0;
}
	
