#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{	
	int num_input,l;
	scanf("%d",&num_input);
	for(l=0;l<num_input;l++)
	{
	char str[100];
	char i = 0;
	int sq,j,k;
	scanf("%s", str);
	while(str[i]!='\0')
	{
		++i;
		
	}
	
	sq = sqrt(i);
	if(i== sq*sq)
	{
	if(i%2==0)
	{
	for(j=0;j<=i/2;j++)
	{
	if((str[j]==str[i-j-1])&&(str[j+sq]==str[i-j-sq-1]))
	{
	if(j==i/2)
	{
	printf("YES\n");
	}			
	}
	else
	{	
	if(j==i/2)
	{
	printf("NO\n");
	}
	}
	}
	}

	if(i%2!=0)
	{
	for(k=0;k<=i/2;k++)
	{
	if((str[k]==str[i-k-1])&&(str[k+sq]==str[i-k-sq-1]))
				
	{	
	if(k==i/2)
	{
	printf("YES\n");	
	}
	}
				
	else
	{
	if(j==i/2)
	{
	printf("NO\n");
	}
	}
				
	}
	}
	}
	else
	{
	printf("NO\n");
	}
	}
	return 0;

}