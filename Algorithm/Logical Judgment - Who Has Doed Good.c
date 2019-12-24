#include <stdio.h>

int main() {
	int i, sum = 0, n, flag = 0;
	char man;
	scanf("%d",&n);
	for(i = 0; i < 6; i++) {
		
		man = 'A' + i;
		sum = (man != 'A') + (man == 'C') + (man == 'D') + (man != 'D') + (man ==' C' || man == 'E') + (man != 'D' && man != 'E');
		if(sum == n) {
			flag++;
			if(flag > 1) {
				printf(" or %c",man);
			}
			else {
				printf("%c",man);
			}
		}
	}
	if(flag == 0)
	printf("Error");
	return 0;
}
