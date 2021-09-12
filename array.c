#include <stdio.h>
int main()
{ int arr[10]={1,1,3,4,5,6,3,1,1,2};
 int count[1000]={0};
	int i,j,z;
	for (i=0;i<=9;i++)
		count[arr[i]]=count[arr[i]]+1;
	for (j=0;j<=1000;j++)
	{	if (count[j]>1)
		{for (z=0;z<count[j];z++)
			printf("%d \n",j);
			printf("\n");}
						}
	return 0;}
