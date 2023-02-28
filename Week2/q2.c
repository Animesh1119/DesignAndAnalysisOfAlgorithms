//Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k]

//Author: Animesh Mohite

#include <stdio.h>
#include <stdlib.h>
void Ind(int *arr, int size, int *p, int *q, int *r)
{
    int i, j, k;
    for (k = 0; k < size; k++)
    {
        for (j = 0; j < size; j++)
        {
            for (i = 0; i < size; i++)
            {
                if ((arr[i] + arr[j] == arr[k] ) && i!=j && i!=k)
                {
                    *p = i;
                    *q = j;
                    *r = k;
                    return;
                }
            }
        }
    }
}
int main()
{
    int i,j,k;
    int arr[] = {24, 28, 48, 71, 86, 89, 92, 120, 194, 201};
    int size = sizeof(arr) / sizeof(int);
    Ind(arr,size,&i,&j,&k);
    printf("\ni: %d , j: %d , k: %d\n", i, j, k);
    return 0;
}