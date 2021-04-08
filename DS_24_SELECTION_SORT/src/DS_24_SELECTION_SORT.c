/*
 ============================================================================
 Name        : DS_24_SELECTION_SORT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sel_sort(int a[],int n);
void print_Array(int a[],int n);

int main(void)
{
	int a[100],n,i;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("\n The Array elements are : \n");
		print_Array(a,n);
		sel_sort(a,n);
		printf(" \n The Sorted Array is :\n \n ");
		print_Array(a,n);
	return EXIT_SUCCESS;
}
void sel_sort(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
				for(j=i+1;j<n;j++)
				{
					if(a[j]<a[min])
					{
						min = j;
					}
				}
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;

	}
}

void print_Array(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
