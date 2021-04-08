/*
 ============================================================================
 Name        : DS_18_LINEARSearch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],i,n,val,found;
	printf("\n enter the number of elements ");
	scanf("%d",&n);
	printf("\n enter the elements into array ");
	for(i=0;i<n;i++)
	{
    scanf("%d",&a[i]);
	}
	printf("\n enter the element to be searched");
	scanf("%d",&val);

	for(i=0;i<n;i++)
	{
		if(a[i] == val)
		{
			printf("\n found @ loc: %d",i);

		}
	}
	if(!found)
	{
		printf("\n element not found");
	}
	return EXIT_SUCCESS;
}
