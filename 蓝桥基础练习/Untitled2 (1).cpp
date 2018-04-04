#include <iostream>
using namespace std;
int main(){
	int h= 0 , m = 0 , s = 0;
	int n;
	cin >> n;
	h = n / 3600;
    n = n % 3600;
    m = n / 60;
    n = n % 60;
    s = n;
    cout << h << ":" << m << ":" << s;
	return 0;
}
