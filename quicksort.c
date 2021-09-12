#include <stdio.h>
#include <stdlib.h>
// taking pivot as last element and egg is the final index of pivot
//i is the starting index of greater sub-array and j is the ending
int partition(int *arr,int start,int end)
{	int i,j,length,pivot,x,temp;
	int *new;
	pivot=end;
	x=arr[end];
	length=end-start+1;
	i=start;
	for(j=start;j<end;j++)
		if (arr[j]<x)
		{	temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
		}
	arr[end]=arr[i];
	arr[i]=x;
	return i;

}
void quick_sort(int *arr,int start,int end)
{	if (end>start)
	{	int egg;
		egg=partition(arr,start,end);
		quick_sort(arr,start,egg-1);
		quick_sort(arr,egg,end);
	}
}
int main()
{	int j,length;
	int arr[]={5,4,3,2,453,97,24,1,0,-2443};
	length=sizeof(arr)/sizeof(arr[0]);
	quick_sort(arr,0,length);
	for (j=0;j<length;j++)
		printf("%d ",arr[j]);	
	return 0;
}