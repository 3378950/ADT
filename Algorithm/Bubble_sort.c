#include <stdio.h>

void Bubble(int a[], int n);

int i,j;

int main() {
	int n;
	int a[100];
	scanf("%d",&n);
	for(i = 0; i < n; i++) scanf("%d",&a[i]);
	
	Bubble(a, n);
	
	for(i = 0; i < n; i++)
	printf("%d ",a[i]);
	
	return 0;
 } 
 void Bubble(int a[], int n) {
 	int t;
 	for(i = 1; i < n; i++) { 
 		for(j = 0; j < n - i; j++) {
 			if(a[j] > a[j + 1]) {
 				t = a[j];
 				a[j] = a[j + 1];
 				a[j + 1] = t;
			}
		}
	} 
	return 0;
 }
