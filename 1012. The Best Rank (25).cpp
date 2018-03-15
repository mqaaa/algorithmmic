
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-15 15:20:48
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;
struct stu{
	int id;
	int c,m,e,a;
	stu(){
		c = m = e = a = 0;
	}
};
multiset<int> C,M,E,A;
map<int,int> __map;
int n,r; 
int main(){
	scanf("%d%d+",&n,&r);
	vector<stu> v(n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d %d %d",&v[i].id,&v[i].c,&v[i].m,&v[i].e);
		v[i].a = v[i].id + v[i].c + v[i].m,&v[i].e;
		C.insert(v[i].c);
		M.insert(v[i].m);
		E.insert(v[i].e);
		A.insert(v[i].a);
		__map[v[i].id] = i;
	}
	cout << distance(C.find(82),C.begin())<<endl;
	
	int temp,k1,k2,k3,k4,h;
	for(int i = 0 ; i < r ; i++){
		scanf("%d",&temp);
		if(!__map.count(temp)){
			printf("N/A");
			continue;
		}
		temp = __map[temp];
		char d;
		int min = n;
		k1 = distance(C.find(v[temp].c),C.begin());
		if(k1<min){
			min = k1;
			d = 'C';
		}
		k2 = distance(M.find(v[temp].m),M.begin());
		if(k2<min){
			min = k2;
			d = 'M';
		}
		k3 = distance(E.find(v[temp].e),E.begin());
		if(k3<min){
			min = k3;
			d = 'E';
		}
		k4 = distance(A.find(v[temp].a),A.begin());
		if(k4<min){
			min = k4;
			d = 'A';
		}
		//cout << distance(C.end(),C.begin())<< endl;
		printf("%d %c",min,d);
	}
	return 0;
}
	
