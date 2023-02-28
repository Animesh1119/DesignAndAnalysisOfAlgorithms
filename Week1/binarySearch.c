#include<stdio.h>
#include<stdlib.h>

int search(int low , int high, int *arr , int sea,int si)
{
	int mid=(low+high)/2;
	if(low>=high )
	{	
	if(sea==arr[mid])
	{
		return mid;
	}
	else if(sea>arr[mid])
	{
		return search(mid,high,arr,sea,si);
	}
	else
	{
		return search(low,mid,arr,sea,si);
	}
	}
	return 0;
}
int main()
{
	int arr[]={0,2,4,6,8};
	int res= search(0,4,arr,10,5);
	if(res)
	{
		printf("\nFound\n");
	}	
	else
	{
		printf("\nNot found\n");	
	}
	return 0;
}
