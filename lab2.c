#include<stdio.h>
#include<string.h>
int string_frequency(char l[],char w[])
{	int n;
	int i=0,j=0;
	
	while(l[i]!='\0')
	{
	if((l[i]==w[j]) &&(w[j]!='\0')&&(l[i])!=' ')
	
	{	
		j++;
		i++;
	}
	n=j;
	printf("%d",i/n) ;
	}

}
int main()
{	
	
	string_frequency("the cat sat on the mat","the");
	return 0;
}