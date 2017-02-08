#include<stdio.h>

int main()
{
	int original_number,reverse_number = 0,remainder,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	original_number = n;
	while(n!=0)
	{	remainder = n%10;
		reverse_number = reverse_number*10+remainder;
		n = n/10;
	}

	if(original_number == reverse_number)
	
		printf("This number is  a palindrome");
	else
		printf("This number ain't a palindrome");
}