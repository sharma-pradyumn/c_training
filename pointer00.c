#include <stdio.h>
int merge(int *arr0,int *arr1,int *arr2,int len)
{	int i=0;
	int j=0;
	int k;
	for(k=0;k<len;k++)
	{	if (*(arr0+i)<*(arr1+j))
			{*(arr2+k)=*(arr0+i);
			i=i+1;}
		else if(*(arr0+i)==*(arr1+j))
			{*(arr2+k)=*(arr0+i);
			i=i+1;
			j=j+1;}
		else if(*(arr0+i)>*(arr1+j))
			{*(arr2+k)=*(arr1+j);
			j=j+1;}			
						}
/*	for (k=0;k<10;k++)
	{	if (k<5)
			arr2[k]=arr0[k];
		else	
			arr2[k]=arr1[k-5];	}*/
	
	return 0;					}
int main()
{ int array1[5]={1,3,5,7,9};
  int array2[5]={2,4,6,8,10};
  int array3[10]={0};
  int i=0;
  merge(array1,array2,array3,sizeof(array1)/sizeof(array1[0])+sizeof(array2)/sizeof(array2[0]));
  for (i=0;i<10;i++)
  	printf("%d \n",array3[i]);
  return 0;	}


