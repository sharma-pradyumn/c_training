#include <stdio.h>
int check (char arr[],int length)
{	int value,i,j,sum;
	int array[100];
	printf("Hello");
	i=0;
	for (i=0;i<length;i++)
	{
		if (arr[i]=='{')
		{	array[i]=1;
		}
		else if (arr[i]=='[')
		{
			array[i]=2;
		}
		else if (arr[i]=='(')
		{
			array[i]=3;
		}
		else if (arr[i]==']')
		{
			array[i]=-2;
		}
		else if (arr[i]==')')
		{
			array[i]=-3;
		}
		else if (arr[i]=='}')
		{
			array[i]=-1;
		}
	
	}
	i=0;
	while (i<length)
	{	printf("%d ",array[i]);
		i++;
	}	
	sum=0;
	i=0;
	j=0;
	while(i<length)
	{	j=0;
		for(i=j;i<100;i++)
		{	sum=sum+array[i];
			if (sum==0)					
			{	if ((array[i]==array[j]*-1) && array[j]>0)
					break;
				else
				{	printf("Not correct");
					return 0;}
			}
		}
		j++;
	}
	printf("Corect");
	return 0;
}
int main()
{
printf("Lolli");	
char arr[4]="()[]";
printf("Hell");
check(arr,4);
return 0;
}

 
