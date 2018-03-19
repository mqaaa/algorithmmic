
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-19 09:30:20
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector> 
using namespace std;
int map[205] = {0}; 
int n,t;
int main(){
	cin >> n >> t;
	vector<int > v[n+1];
	int t1,t2;
	for(int i = 0 ; i < t ; i++){
		cin >> t1 >> t2;
		v[t1].push_back(t2);
		v[t2].push_back(t1);
	}
	int temp;
	cin >> temp;
	int k;
	
	for(int i = 0 ; i< temp ;i++){
		cin >> k;
		vector<int> rr;
		fill(map,map+205,0);
 		for(int j = 0 ; j < k ; j++){
			cin >> t1;
			rr.push_back(t1);
			for(int d = 0 ; d < v[t1].size() ; d++){
				map[v[t1][d]]++;
			}
		}
		int test1 = true;
		for(int j = 0 ; j < rr.size() ; j++){
			if(map[rr[j]]!=k-1){
				test1 = false;
				break;
			}
		}
		if(test1==false){
			cout << "Not a Clique"<<endl;
			continue;
		}
		for(int j = 1 ; j <= n ; j++){
			if(map[j]==k){
				cout << "Not Maximal"<<endl;
				test1 = false;
				break;
			}
		}
		if(test1==false){
			continue;
		}
		cout<<"Yes"<<endl;
	}
	
	return 0;
}
	
