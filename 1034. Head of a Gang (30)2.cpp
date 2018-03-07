#include <map>
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX = 1010;
map<string,int> stoi;
map<int,string> itos;
map<string,int> res;
map<string,int>::iterator it;
vector<int> wei(1010,0);
struct Node{
	int path;
	int weight;
};
vector<Node> v[1010];
bool vis[1010] = {false};
int n,k;
int saveStrNum = 0;
int sum,depth;
int max1;
int savestr(string str,int w){
	if(stoi.find(str)!=stoi.end()){
		stoi[str] = saveStrNum;
		itos[saveStrNum] = str;
		wei[saveStrNum] += w;
		return saveStrNum++; 
	}else{
		wei[stoi[str]] += w;
		return stoi[str];
	}
}
void dfs(Node u){
	vis[u.path] = true;
	sum += u.weight;
	if(wei[max1] < wei[u.path])max1 = u.path;
	for(int i = 0 ; i < v[u.path].size() ; i++){
		if(vis[v[u.path][i].path]==false){
			depth++;
			dfs(v[u.path][i]);
		}
	}
}
int dfsTrave(){
	int s = 0;
	for(int i = 0 ; i < saveStrNum ; i++){
		if(vis[i]==false){
			vis[i] = true;
			sum = 0,depth = 1,max1 = i;
			dfs(v[i][0]);
			if(depth>2 && sum > 70){
				res[itos[i]] = depth;
			}
		} 
	}
}
void print(){
	printf("%\n",res.size());
	for(it=res.begin();it!=res.end();it++){
		cout <<it->first <<" "<<it->second<<endl;
	}
}
int main(){
	scanf("%d %d",&n,&k);
	string str1,str2;
	int w;
	for(int i = 0 ; i < n ; i++){
		cin >> str1 >> str2 >> w;
		int s1 = savestr(str1,w);
		int s2 = savestr(str2,w);
		Node no;
		no.path = s2;
		no.weight = w;
		v[s1].push_back(no);
	}
	dfsTrave();
	print();
	return 0;
}
