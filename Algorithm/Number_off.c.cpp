#include <stdio.h>
#include <string.h>

int main() {
	int m, n, out[100];
	memset(out, 0, sizeof(out));
	scanf("%d %d",&n,&m);
	int i = 0, j = 1, a = n, c = 0;
	while(a != 0) {
		i++;
		if(out[i - 1] == 0) {
			c++;
			if(c == m) {
				c = 0;
				printf("%d\n",i - 1);
				out[i - 1] = j++;
				a--;
			}
		}
		if(i >= n) i = 0;
	}
	for(i = 0; i < n; i++)
	printf("%d ", out[i]);
	return 0; 
}
