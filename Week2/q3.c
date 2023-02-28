//Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.

//Author: Animesh Mohite

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Ind(int *arr, int size, int key, int *c)
{
    int i, j, k;
    for (k = 0; k < size; k++)
    {
        for (j = 0; j < size; j++)
        {
            for (i = 0; i < size; i++)
            {
                if ((arr[i]-arr[j] == key )&& i!=j && i!=k)
                {
                    (*c)+=1;
                }
            }
        }
    }
    return;
}
int main()
{
    int arr[]={24, 71, 16, 92, 12 ,28 ,48 ,14 ,20 ,22};
    int size = sizeof(arr)/sizeof(int);
    int c = 0; int key;
    printf("\nEnter Key: \n");
    scanf("%d",&key);
    Ind(arr,size,key,&c);
    printf("\nNumber of Such Pairs : %d\n",c/2);
    return 0;
}