#include<stdio.h>
#include<string.h>
int checkPalindrome(char str[])
{
	
	int l = 0,i=0;
	while(str[i]!='\0')
		++i;
	--i;
	
	while(i>l)
	{
		if(str[i--]!=str[l++])
		{	printf("%s is not palindrome\n",str);
			return;
		}
		}
			printf("%s is palindrome\n",str);
}
int main()
{
	checkPalindrome("abba");
	checkPalindrome("vbadu");

	return 0;
}