#include <stdio.h>
int main()
{	int len,i;
	int arr[5]={1,2,3,4,5};
	int arr2[5]={};
	len=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<len;i++)
		*(arr2+i)=*(arr+i);
	for (i=0;i<len;i++)
		printf("%d \n",*(arr2+i));
	return 0;}
