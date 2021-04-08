/*
 ============================================================================
 Name        : DS_25_QUICK_SORT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Quick_Sort(int a[], int lb, int ub);
int Partition(int a[], int lb, int ub);
void Print_Array(int a[], int n);
void swap(int start ,int end,int a[start],int b[end]);
int main(void) {
	int a[20],lb,ub,n,i;
	printf("\n enter the number of elements to array");
	scanf("%d",&n);
	printf("\n enter the elements into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lb = 0;
	ub = n-1;
	printf("\n-------------BEFORE SORT-------------\n");
	Print_Array(a,n);
	printf("\n--------------------------------------\n");
	Quick_Sort(a,lb,ub);
	Partition(a,lb,ub);
	printf("\n-------------AFTER SORT--------------\n");
	Print_Array(a,n);
	printf("\n--------------------------------------\n");

	return EXIT_SUCCESS;
}

void Quick_Sort(int a[], int lb, int ub)
{
	if(lb<ub)
	{
		int loc = Partition(a,lb,ub);
		Quick_Sort(a,lb,loc-1);
		Quick_Sort(a,loc+1,ub);
	}
}
int Partition(int a[], int lb, int ub)
{
	int pivot = a[lb];
	/*int start = lb+1;
	int end   = ub;*/
	int i = lb+1;
	int j= ub;

	if(lb < ub)
	{
		while(i<=j)
		{
		while(a[i]<pivot && i <= ub)
		{
			i++;
		}
		while(a[j]>pivot && j>=lb)
		{
			j--;
		}
		if(i<j)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

		pivot
	else
	{
int	t2 = a[lb];
	a[lb] = a[j];
	a[j] = t2;
	break;
	}
	return j;
}

void Print_Array(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}

void swap(int start,int end,int a[start],int b[end])
{
	int temp;
	temp = a[start];
	a[start] = b[end];
	b[end] = temp;
}

