#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
vector<int > v1;
int num = 0;
void func(int c,int t){ 
    if(c==0){
        if(num==1000000007)num=0;
        num++;
        return;
    }
    for(int i = t ; i < v1.size() ; i++){
        if(v1[i]<=c){
            func(c-v1[i],i);
        }
    }
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int temp;
    for(int i = 0 ; i < a ; i++){
        cin >> temp;
        v1.push_back(temp);
    }
    func(c,0);
    for(int i = 0 ; i < b ; i++){
        cin >> temp;
        if(c>=temp)func(c-temp,0);
    }
    cout << num;
    return 0;
}
