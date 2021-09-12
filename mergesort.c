#include <stdio.h>
#include <stdlib.h>
void merge(int *arr,int start,int mid,int right,int *new,int len)
{	int i,j,k;
	i=0;
	j=1;
	k=0;
	for (k=0;k<len;k++)
	{   if ((start+i<=mid) && (j+mid<=right))
	    {	
		if (arr[start+i]<arr[mid+j])
		{	new[k]=arr[start+i];
			i++;
		}
	        else
		{	new[k]=arr[mid+j];
			j++;
		}	
	    }
	    else 
	    {	if (start+i>mid)
		{	new[k]=arr[mid+j];
			j++;
		}	
		else if (j+mid>right)
		{	new[k]=arr[start+i];
			i++;
		}
	     
	
	    }
	}
}
int merge_sort(int *array, int start,int end)
{	if (end>start)
	{	int *new_arr;
		int length;
		int i,mid;
		length=end-start+1;
		mid=start+(end-start)/2;
		new_arr=(int *)malloc((length)*(sizeof (int)));
		merge_sort(array,start,mid);
		merge_sort(array,mid+1,end);

		merge(array,start,mid,end,new_arr,length);
		for (i=0;i<length;i++)
		{
			array[start+i]=new_arr[i];
		}
		return 1;
	}
	else
		return 0;
}


int main()
{	int arr[]={1,5,4,3,2,34,512,45,2342,45,4};
	int length,i;
	length=sizeof(arr)/sizeof(arr[0]);
	merge_sort(arr,0,length);
	for (i=0;i<=length;i++)
		printf("%d ",arr[i]);
	return 0;
}
