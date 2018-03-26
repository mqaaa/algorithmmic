#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<int> hi[1005];
bool f[1005];
vector<int> edge[1005];
set<int,less<int> > set1;
vector<int> v;

void dfs(int v){
  f[v]=0;
  int p;
  for(int i=0;i<hi[v].size();i++){
    p=hi[v][i];
    set1.insert(p);
  }
  for(int i=0;i<edge[v].size();i++){
    int w=edge[v][i];
    if(f[w]){
      dfs(w);
    }
  }
}
int main(){
  int n;
  int m;
  int a,b;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>m;
    getchar();
    a=0;
    for(int j=0;j<m;j++){
      cin>>b;
      f[b]=1;
      hi[b].push_back(i);
      if(a!=0){

        edge[a].push_back(b);
        edge[b].push_back(a);
      }
      a=b;
    }

  }

  for(int i=1;i<=1000;i++){
    if(f[i]){

      set1.clear();
      dfs(i);
      int num=set1.size();
      v.push_back(num);
    }
  }
  cout<<v.size()<<endl;
  sort(v.begin(),v.end()); 
  for(int i=v.size()-1;i>0;i--){
    cout<<v[i]<<" ";
  }
  cout<<v[0]<<endl;
  return 0;
}
