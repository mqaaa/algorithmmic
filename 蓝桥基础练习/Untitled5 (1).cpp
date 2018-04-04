#include <iostream>
using namespace std;
int main(){
	int a[32][32],b[32][32],c[32][32];
	int n;
	int ch;
	cin >> n >> ch;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> a[i][j];
			b[i][j]=a[i][j];
		}
	}
	if(ch == 0) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    cout << 0 << " ";
                } else {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
        return 0;
    }
	for(int i = 1 ; i < ch ;i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < n ; k++){
				c[j][k] = 0;
				int temp = n-1;
				while(temp>=0){
					c[j][k] += a[j][temp]*b[temp][k]; 
					temp--;
				}
			}
		}
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < n ; k++){
				b[j][k] = c[j][k];
			}
		}
	}
	for(int j = 0 ; j < n ; j++){
		for(int k = 0 ; k < n ; k++){
			cout<< b[j][k]<<" ";
		}
		cout << endl;
	}
	return 0;
}
