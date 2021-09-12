#include <stdio.h>
int swap(int *ptra,int *ptrb)
{	int temp;
	temp=*ptra;
	*ptra=*ptrb;
	*ptrb=temp;
	return 0;	}
int main()
{	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	swap(&a,&b);
	printf("%d  %d \n",a,b);
	return 0;}

