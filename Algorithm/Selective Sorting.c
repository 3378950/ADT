#include <stdio.h>

int main()
{
	int i, j, index, t, a[10];
	int n;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	scanf("%d", &a[i]);
	for(i = 0; i < n; i++) {
		index = i;
		for(j = i + 1; j < n; j++) {
			if(a[index] < a[j]) {
				index = j;
			}
		}
		t = a[index];
		a[index] = a[i];
		a[i] = t;
	} 
	for(i = 0; i < n; i++) {
		if(i != n-1)
		printf("%d ",p[i]);
		else
		printf("%d",p[i]);
	}
	return 0; 
}
