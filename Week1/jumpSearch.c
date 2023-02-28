//Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on. Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key. (Complexity < O(n), where n is the number of elements need to be scanned for searching)

//Author: Animesh Mohite

//Date: 19-FEB-2023 10:30 IST


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linearSearch(int *arr, int l1, int l2, int sea)
{
    int fi = 0;
    for (int i = l1; i <= l2; i++)
    {
        if (arr[i] == sea)
        {
            fi = 1;
            break;
        }
        else
        {
            continue;
        }
    }
    return fi;
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int jumpSearch(int *arr, int size, int search)
{
    int d1 = 0; 
    int d2 = 2;
    int m = 0;
    int n = pow(2, d2);
    int f=0;
    int indEl=arr[m];
    while(indEl<search)
    {
        if(indEl==search)
        {
            printf("\nFound Early!\n");
            break;
        }
        swap(&m,&n);
        d2=d2*2;
        n = pow(2, d2);
        indEl = arr[n];
        continue;
    }
    f=linearSearch(arr,m,n,search);
    return f;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int k = jumpSearch(array,20,21);
    printf("%d", k);
    return 0;
}