#include <stdio.h>
int main()
{	int arr[]={1,2,3,4,5,6};
	int len,temp,i;
	len=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len/2;i++)
	{	temp=arr[i];
		arr[i]=arr[len-1-i];
		arr[len-i-1]=temp;	}
	for (i=0;i<len;i++)
		printf("%d \n",arr[i]);
	return 0;	} 
