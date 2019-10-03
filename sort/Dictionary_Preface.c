#include<stdio.h>
#include<string.h>
#define maxn 10
int main()
{
	char s[maxn][maxn],t[maxn];
	for(int i=0;i<5;i++)
	scanf("%s",s[i]);
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4-i;j++)
		{
			if(strcmp(s[j],s[j+1])>0)//reverse the string base on the order of the dict 
			{
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
		}
	}
	for(int i=0;i<5;i++)
	printf("%s\n",s[i]);
 } 
