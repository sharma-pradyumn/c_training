#include <stdio.h>
void insert_sort(int arr[],int length)
{	int i=1,j,x;
	while (i<length)
	{	x=*(arr+i);
		j=i-1;
		while ((j>=0) && (x<*(arr+j)))
		{	*(arr+j+1)=*(arr+j);
			j--;
		}
		*(arr+j+1)=x;
		i++;
	}
}

int main()
{	int t=0,length;
	int arr[]={4,3,2,5,6,7,8,0,1,9,32,43,54,656,12,22};
	length=sizeof(arr)/sizeof(arr[0]);
	insert_sort(arr,length);
	for (t=0;t<length;t++)
		printf(" %d",arr[t]);
	printf("\n");
	return 0;
}

