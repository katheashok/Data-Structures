/*
 ============================================================================
 Name        : DS_22_BUBBLE_SORT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Bubble_Sort(int a[], int n);
void Print_Array(int a[], int n);

int main(void) {
	int a[10],n,i;
	printf("enter the number of elements need to enter the array");
	scanf("%d",&n);
	printf("\n enter the elements in to array ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\n-----------------BEFORE sorting-------------\n");
	Print_Array(a,n);
	printf("\n--------------------------------------------\n");
	Bubble_Sort(a,n);
	printf("\n-----------------AFTER sorting--------------\n");
	Print_Array(a,n);
	printf("\n--------------------------------------------\n");
	return EXIT_SUCCESS;
}

void Bubble_Sort(int a[] , int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void Print_Array(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}
