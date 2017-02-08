#include<stdio.h>
#include<string.h>
int  main()
{
	char str1[100],str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	int i=0,j;
	while(str1[i]!='\0')
	{
		i++;
	}
	for(j=0;j<strlen(str2);j++,i++)
	{
		str1[i]=str2[j];
	}
	printf("%s",str1);

	return 0;
}
