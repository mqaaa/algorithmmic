#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string str;
int main(){
    cin >> str;
    int len = str.length(); 
    int c;
    cin >> c;
    int n,m,x,y;
    for(int i = 0 ; i < c ; i++){
        cin >> n >> m >> x >> y;
        int k = 0;
        while(k<len){
            if(str[k]=='u'){
                x = x - 1;
                if(x==0){
                    cout<<k+1<<endl;
                    break;
                }
            }else if(str[k]=='r'){
                y = y + 1;
                if(y>m){
                    cout << k+1 << endl;
                    break;
                }
            }else if(str[k]=='l'){
                y = y-1;
                if(y==0){
                    cout << k+1 << endl;
                    break;
                }
            }else{
                x = x + 1;
                if(x>n){
                    cout << k+1 << endl;
                    break;
                }
            }
            k++;
        }
        if(k==len)cout<<len<<endl;
    }
    return 0;
}
