#include<stdio.h>
#include<string.h>
int strend(char *s,char *t)
{
    int len;
    len = mystrlen(t); 
    while(*s!='\0')
          ++s;
    --s;
    while(*t!='\0')
          ++t;
    --t;
    while(len > 0)
    {
    if(*t==*s)
    {
    --t;
    --s;
    --len;
    }
    else
    return 0;
    }
    if(len == 0)
    return 1;
}
int mystrlen(char *t)
{
    char *p;
    p=t;
    while(*p!='\0')
    ++p;
    return p-t;
}

int main()
{	
    int pp;
	char str1[100],str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	pp = strend(str1,str2);
	printf("%d",pp);
	return 0;
}