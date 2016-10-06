/*F*/
#include <iostream>

using namespace std;

int main(){

        int a[5] = {0,1,2,3,4};
	char b[5] = {'A','B','C','D','E'};

	int k = 0;

	while(k<100){
		k++;
	        cout << a[k % 5] << " ";
		cout << b[k % 5] << endl;
	}


	return 0;
}