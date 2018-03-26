#include <iostream>
using namespace std;
int main(){
	int num = 0;
	for(int i = 100 ; i < 100000 ; i++){
		int w = i;
		int flag1 = false,flag2 = false; 
		int temp1 = w%10;
		w = w/10;
		int temp2 = w%10;
		while(temp2<temp1){
			w = w/10;
			temp1 = temp2;
			temp2 = w%10;
			flag1 = true;
		}
		while(temp2>temp1){
			w = w/10;
			temp1 = temp2;
			temp2 = w%10;
			flag2 = true;
		}
		if(w==0&&flag1==true&&flag2==true){
			num++;
			cout << i << endl;
		}

	}
	cout << num;
	return 0;
}
