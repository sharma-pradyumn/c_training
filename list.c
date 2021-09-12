#include <stdio.h>
int main()
{	int arr[100]={0};
	int max,y,j,i,len,k,xx;
	scanf("%d",&len);
	for(k=0;k<len;k++)
	{	scanf("%d",&xx);
		arr[k]=xx;}
	max=arr[0];
	for (i=0;i<len;i++)
	{	if (arr[i]>max)
			{max=arr[i];}
					}
	y=arr[0];
	for (j=0;j<len;j++)
	{	if (arr[j]<max) 
		{	if (arr[j]>y)	
			{y=arr[j];}	}	}
	printf("%d \n",y);
	return 0;	}
