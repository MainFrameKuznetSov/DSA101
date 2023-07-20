#include<stdio.h>
int getMax(int arr[],int x)
{
	int max=arr[0];
	for(int i=1;i<x;i++)
		max=arr[i]>max?arr[i]:max;
	return max;
}	
int main()
{
	int n;
	printf("Enter the length of array:- ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter array[%d]:- ",i);
		scanf("%d",&array[i]);
	}
	printf("The maximum number is:- %d",getMax(array,n));
}
