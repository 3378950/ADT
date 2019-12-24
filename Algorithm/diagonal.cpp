#include <iostream>

using namespace std;

const int n = 64;
int x = 4,y = 2;

void print(int arr[n][n]) {
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j)
			cout << arr[i][j] << " ";
		cout<<endl;
	}
}

int main()
{
	const int x = 4,n = 64;
	const int y = 2;
	int A[n][n], B[n][n], C[n][n];
	
	for(int i = 0;i < n; ++i) {
		for(int j = 0; j < n; j++) {
			A[i][j] = (i != j) ? y : x;
		}
	}
	
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
		B[i][j] = y;
	for(int i = 0; i < n; ++i)
		B[i][i] = x;
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < i; ++j)
			C[i][j] = y;
		for(int j = i + 1;j < n; ++j)
			C[i][j] = y;
		C[i][i] = x;
	}
	print(A); cout<<endl;
	print(B); cout<<endl;
	print(C);
	return 0; 
} 


