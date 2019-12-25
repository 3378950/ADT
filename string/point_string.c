#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *colour[21], str[12];
    for(int i=0;i<5;i++)
    {
        scanf("%s",str);
        colour[i] = (char *)malloc(sizeof(char)*strlen(str) + 1);
        strcpy(colour[i], str);
    }
    char *t;
    for(int i = 1; i < 5; i++) {
        for(int j = 0; j < 5 - i; j++) {
            if(strcmp(colour[j], colour[j+1]) > 0) {
                t = colour[j];
                colour[j] = colour[j + 1];
                colour[j + 1] = t;
            }
        }
    }
    printf("After sorted:\n");
    for(int i = 0; i < 5; i++)
    printf("%s\n", colour[i]);
    system("pause");
    return 0;
}
