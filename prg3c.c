#include<stdio.h>
int fact(int x)
{
	return(x==0 || x==1 ? 1 : x*fact(x-1));
}
int main()
{
	int n;
	printf("Enter a number:- ");
	scanf("%d",&n);
	printf("The factorial is:- %d",fact(n));
	return 0;
}
