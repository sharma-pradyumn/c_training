#include <stdio.h>
int input(int *ptr,int len)
{	int i;
	for(i=0;i<len;i++)
	{	scanf("%d",ptr+i);}
	return 0;	}
int main()
{	int j;
	int arr[10]={};
	input(arr,10);
	for (j=0;j<10;j++)
	{ printf("%d",arr[j]);	}
	return 0;			}

