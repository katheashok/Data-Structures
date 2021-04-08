/*
 ============================================================================
 Name        : DS_21_max_min_without_sorting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int pmax(int a[],int n);
int pmin(int a[], int n);
/*********************main function**************/
int main(void)
{
	int n,i,max,min,a[50];
	printf("enter the size of the array");
	scanf("%d",&n);

	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("the elements of the array are: \n ");
	for(i=0;i<n;i++)
		{
			printf(" %d ", a[i]);
		}

	max=pmax(a,n);
	printf("\n the maximum element is : %d",max);

	min = pmin(a,n);
	printf(" \n the minimum element is : %d",min);

	return EXIT_SUCCESS;
}

/*********** FUNCTION DEFINITIONS***********/

 int pmax(int a[], int n)
 {
	 int i,max=0;

	 for(i=0;i<n;i++)
	 {
		 if(a[i]>max)
		 {
			 max=a[i];
		 }
		 else
			 continue;
	 }
	 return max;
 }

 int pmin(int a[], int n)
  {
 	 int i,min;
 	 min = a[0];
 	 for(i=0;i<n;i++)
 	 {
 		 if(a[i]<min)
 		 {
 			 min=a[i];
 		 }
 		 else
 			 continue;
 	 }
 	 return min;
  }
