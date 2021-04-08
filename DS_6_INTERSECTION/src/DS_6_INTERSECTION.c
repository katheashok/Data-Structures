/*
 ============================================================================
 Name        : DS_6_INTERSECTION.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *root1 = NULL;
NODE *roor2 = NULL;

void Insert(int );
void display_1();
void Intersection();
int main(void) {
	int ch, val;
	do
	{
		printf("\n1. insert element\n2. display")
	printf("enter the choice :");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("\n enter the element");
		scanf("%d",&val);
		Insert(val);
		break;
	case 2:
		display_1();
		break;
	}
	}while(ch!=0);
	return EXIT_SUCCESS;
}

void Insert(int val)
{

}
