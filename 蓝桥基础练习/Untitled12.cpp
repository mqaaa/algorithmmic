#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    vector<int > v(a+1);
    v[a] = 1;
    for(int i = c ; i < b ; i++){
    	v[i] = 1;
    }
    int num = 0;
    for(int i = 0 ; i < v.size() ; i++)if(v[i]==1)num++;
    cout << num;
	return 0;
}
