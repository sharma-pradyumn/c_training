#include <stdio.h>
#include <stdlib.h>
/*int binary(int *array,int len,int x)
{	int i,j,mid,start,end;
	start=0;
	end=len-1;
	while (end>start)
	{	mid=(start+end)/2;
		if (*(array+mid)>x)
			end=mid;
		else
			start=mid;	}
	return start;	}
*/
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
//			printf("case1 \n");
		}
	        else
		{	new[k]=arr[mid+j];
			j++;
//			printf("case2 \n");
		}	
	    }
	    else 
	    {	if (start+i>mid)
		{	new[k]=arr[mid+j];
			j++;
//			printf("case 3 \n");
		}	
		else if (j+mid>right)
		{	new[k]=arr[start+i];
			i++;
//			printf("case 4 \n");
	
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
//		for (i=0;i<5;i++)
//			printf("%d",array[i]);
//		printf("\n");
//		printf("%d %d %d %d \n",start,mid,end,length);
		merge(array,start,mid,end,new_arr,length);
		for (i=0;i<length;i++)
		{
			array[start+i]=new_arr[i];
//			printf("%d",new_arr[i]);
		}
//		printf("\n"); 
		return 1;
	}
	else
		return 0;
}


int main()
{	int arr[]={1,5,4,3,2,34,512,45,2342,45,4};
	int length,i;
	length=sizeof(arr)/sizeof(arr[0]);
//	merge(arr,0,1,4,array,5);
	merge_sort(arr,0,length);
	for (i=0;i<=length;i++)
		printf("%d ",arr[i]);
	return 0;
}
