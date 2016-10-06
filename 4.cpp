/*F*/
#include <iostream>

using namespace std;

int cnt = 0;

void f(int x){
	if(x == 120) return;
	cnt++;
	f(x + 10);
}

int main(){

        f(0);

        cout << cnt;
	return 0;
}