#include <stdio.h>
int main()
{int arr[]={1,2,3,4,45,34,1};
int *p,i;
p=&arr[0];
for (i=0;i<=6;i++)
	{printf("%d \n",*p);
	p++;		}
	
return 1;}
