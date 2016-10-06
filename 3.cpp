/*F*/
#include <iostream>

using namespace std;

int main(){

	int a[100][100];

	for(int i = 0; i < 5; ++i){
		for(int j = 0;  j < 5; ++j){
			a[i][j] = i;
		}
	}
	         
	for(int i = 0; i < 5; ++i){
		for(int j = 0;  j < 5; ++j){
			cout << a[i][j] << " ";
		}
		cout <<endl;
	}

	return 0;
}