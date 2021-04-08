

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10], i, n, val,low,mid,high,found;
	printf("\n enter the number of elements ");
	scanf("%d", &n);
	printf("\n enter the elements into array ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n enter the element to be searched");
	scanf("%d", &val);

	low = 0;
	high = n-1;
	while(low<=high)
	{
		mid = (low + high)/2;
		if(val < a[mid])
		{
			high = mid-1;
		}
		else if(val > a[mid])
		{
			low = mid+1;
		}
		else if(val == a[mid])
		{
			printf("found @ loc: %d",mid);
			found = 1;
			break;
		}
	}
	if(!found)
	{
		printf("element not Found");
	}
	return EXIT_SUCCESS;
}
