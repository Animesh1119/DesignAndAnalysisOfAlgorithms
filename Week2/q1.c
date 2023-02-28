// Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))

/*
Known Bugs:
1.) Crashes for value <=1
*/
// Author: Animesh Mohite

#include<stdio.h>
#include<stdlib.h>

int findIt(int *arr,int size,int i,int j,int se,int *ind)
{
    int mid = (i+j+1)/2; 
    if(i<j)
    {
        if(arr[0]==se)
        {
            *(ind) = 0;
            return 1;
        }
        if(arr[mid]==se)
        {
            *ind = mid;
            return 1;
        }
        else if(arr[mid]<se)
        {
            i=mid;
            findIt(arr,size,i,j,se,ind);
        }
        else if(arr[mid]>se)
        {
            j=mid;
            findIt(arr,size,i,j,se,ind);   
        }
    }
}

int freq(int *arr,int size,int i,int j,int se,int *indF)
{
    int k=findIt(arr,size,i,j,se,indF);
    if(k==1)
    {
        int c=0;
        while(arr[*indF]==se)
        {
            *(indF)=*(indF)+1;
        }
        *(indF) -=1 ;
        while(arr[*indF]==se && *(indF)!=0)
        {
            c++;
            *(indF) -=1 ;
        }
        return c;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int ind;
    int arr[] = {2,3,4,4,5,5,5,6,7,8,8,8,8,8,9,10,11};
    int ch=1; int k=-1; int sea;
    printf("\nEnter Search Term: \n");
    scanf("%d",&sea);
    int f=freq(arr,17,0,16,sea,&ind);
    printf("\nIt appeared %d times in the array\n",f);
    return 0;
}