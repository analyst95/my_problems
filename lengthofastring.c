#include<stdio.h>
int main()
{
char s[100];
int i=0;
scanf("%s", s);
while(s[i] != '\0')
{
	++i;
}

	printf("the number of characters in the string is %d", i);

	
	
	return 0;
}