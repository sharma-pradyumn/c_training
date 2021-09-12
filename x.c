#include<stdio.h>


int main(void)
{
	int n;
	printf("Enter size of Array = ");
	scanf("%d",&n);

	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter element %d = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");


}
