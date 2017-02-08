#include<stdio.h>
#include<string.h>

struct emp_record
{
	char emp_name[50];
	int emp_id;
	int emp_salary;
	
		
};

int main()
{
	struct emp_record emp_01;
	struct emp_record emp_02;
	
	strcpy(emp_01.emp_name,"Aditya");
	emp_01.emp_id = 001;
	emp_01.emp_salary =10000;
	strcpy(emp_02.emp_name,"Ram");
	emp_02.emp_id = 002;
	emp_02.emp_salary = 12000;

	printf("%s\n",emp_01.emp_name);
	
	printf("%s\n",emp_02.emp_name);
	


	return 0;
}
