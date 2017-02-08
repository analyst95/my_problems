#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,j,count;
	scanf("%s",str1);
	scanf("%s",str2);
	int k=0,l=0;
	while(str1[k]!='\0')
	{
	++k;
	}
	while(str2[l]!='\0')
	{
	++l;
	}
	for(i=k,j=l,count=0;j>0;j--)
	{
	if(str1[i]==str2[j])
	{
	i--;
	count++;
	}
			
	}
		
	if(count==k-i)
	printf("1");
	else
	printf("0");
	
		
		

}