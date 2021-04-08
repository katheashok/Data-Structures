/*
 ============================================================================
 Name        : DS_23_INSERSTION_SORT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Inserstion(int a[],int );
void print_Array(int a[],int );

int main(void) {
	int a[10],n,i;
	printf("\n enter the size of array");
	scanf("%d",&n);
	printf("\n enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n------------------before-------------\n");
	    print_Array(a,n);
	printf("\n--------------------------------------\n");
	    Inserstion(a,n);
	printf("\n------------------after-------------- \n");
	print_Array(a,n);
	printf("\n--------------------------------------\n");

	return EXIT_SUCCESS;
}
void Inserstion(int a[],int n)
{
	int i,j,temp;
		for(i=1;i<n;i++)
		{
			temp=a[i];
			j = i-1;
			while(j>=0 && a[j]>temp)
			{
				a[j+1] = a[j];
				j=j-1;
			}
			a[j+1] = temp;
		}
}
void print_Array(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}

