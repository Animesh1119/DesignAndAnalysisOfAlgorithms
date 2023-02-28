#include<stdio.h>
#include<stdlib.h>

int functionn(int * arr, int *coarr ,int s,int se)
{
	int j=0;
	for(int i=0;i<s;i++)
	{
		if(se==arr[i])
		{
			coarr[j]=i;
			j++;
			
		}
	}
	return j;
}

void printArray(int *arr1,int *arr2,int sii)
{
	printf("\nArray: \n");
	for(int i=0;i<sii;i++)
	{
		printf(" %d ",arr1[arr2[i]]);
	}
	printf("\n	");
}

int main()
{
	int arr[] = {2,9,5,7,0,1};
	int se;
	printf("Enter Element to be searched: ");
	scanf("%d",&se);
	int si = sizeof(arr)/sizeof(int);
	int * coarr = malloc(sizeof(int)*2*si);
	int size = sizeof(coarr)/sizeof(int);
	int p= functionn(arr,coarr,si,se);	
	if(p)
	{
		printf("\nKey Found!\n");
		// printArray(arr,coarr,p);
	}
	else
	{
		printf("\nKey not Found!\n");
	}
	return 0;
}
