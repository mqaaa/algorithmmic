#include <iostream>
#include <cstdlib>
using namespace std;
int map[1005];
int main(){
	int num = 0;
	fill(map,map+1002,1);
	for(int i = 1 ; i <= 1000 ; i++){
		if(i%3==0)map[i]++;
		if(i%5==0)map[i]++;
		if(i%7==0)map[i]++;
	}
	for(int i = 1 ; i <= 1000 ; i++){
		if(map[i]%2==1){
			num++;
		}
	}
	cout << num;
	return 0;
}
