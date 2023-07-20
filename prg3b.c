#include<stdio.h>
int addNumbers(int a,int b)
{
	return a+b;
}
int main()
{
	int x,y;
	printf("Enter 2 numbers:- ");
	scanf("%d %d",&x,&y);
	printf("The sum is:- %d",addNumbers(x,y));
	return 0;
}
