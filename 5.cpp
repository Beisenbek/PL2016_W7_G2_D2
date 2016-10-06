/*1470*/
#include <iostream>

using namespace std;

int a[10][10];
int n;
int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

void print(){
	for(int i = 0; i < n; ++i){
		for(int j = 0;  j < n; ++j){
			cout << a[i][j] << "\t";
		}
		cout <<endl;
	}

}


void init(){
	for(int i = 0; i < n; ++i){
		for(int j = 0;  j < n; ++j){
			a[i][j] = -1;
		}
	}

}

bool insideRectangle(int x,int y){
	if(x < n && y < n && x >=0 && y >=0) return true;
	return false;
}

void putNumberToArray(int r, int c, int i, int k){
	if(k > n*n) return;

	int nr = r + dr[i];
	int nc = c + dc[i];

	if(insideRectangle(nr,nc) && a[nr][nc] == -1){
		a[nr][nc] = k;
		putNumberToArray(nr,nc,i,k+1);
	}else{
		putNumberToArray(r,c,(i+1)%4,k);	
	}
}

int main(){
        
        cin >> n;
        init();
        putNumberToArray(0,-1,0,1);
        print();	       
	
	return 0;
}
