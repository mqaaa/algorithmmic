#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main(){
	int n;
	cin >> n;
	int x[4],y[4];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < 4 ; j++){
			scanf("%d",&x[j]);
		}
		for(int j = 0 ; j < 4 ; j++){
			scanf("%d",&y[j]);
		}
		int k;
		set<int> s;
		for(int j = 0 ; j < 4 ; j++){
			for(int k = 0 ; k < 4 ; k++){
				if(j!=k){
					k = (x[j]-x[k])*(x[j]-x[k]) + (y[j]-y[k])*(y[j]-y[k]);
					s.insert(k);	
				}
			}
		}
		if(s.size()!=2)printf("No\n");
		else printf("Yes\n");
	}
	return 0;
} 
