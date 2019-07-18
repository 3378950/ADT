#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxn 110
char s[maxn];

int cmp(const void *a,const void *b)
{
	return *(int * )a-*(int *)b;
}

int main()
{
	gets(s);
	int a[maxn];
	memset(a,0,sizeof(a));
	int len = strlen(s);
	for(int i=0;i<len;i++) a[i]=s[i]-'A';
	qsort(a,len,sizeof(a[0]),cmp);
	for(int i=0;i<len;i++)
	printf("%c",'A'+a[i]);
} 
