#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int map[1000][1000];
bool cmp(int a,int b){return a>b;}
int main(){
	int n,temp;
	scanf("%d",&n);
	vector<int > v;
	for(int i = 0 ; i < n ; i++)scanf("%d",&temp),v.push_back(temp);
	sort(v.begin(),v.end(),cmp);
	int c = sqrt(n);
	//cout << c << endl;
	int r;
	for(int i = c ; i > 0 ; i--)if(n%i==0){c = n/i ; r = i;break;}
	//cout << c << " "<<r<<endl;
	if(r==1){
		for(int i = 0 ; i< n ; i++)printf("%d\n",v[i]);
		return 0;
	}
	int st = 0,k = 0;	
	while(k<n){
		for(int i = st ;     i < r-st ; i++)map[st][i]=v[k++];
		for(int i = st+1 ;   i < c-st ; i++)map[i][r-st-1]=v[k++];
		for(int i = r-st-2 ; i >= st  ; i--)map[c-st-1][i]=v[k++];
		for(int i = c-st-2 ; i > st   ; i--)map[i][st]=v[k++];
		st++;
	}
	for(int i = 0 ; i < c ; i++){
		printf("%d",map[i][0]);
		for(int j = 1 ; j < r ; j++){
			printf(" %d",map[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
