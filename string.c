#include <stdio.h>
/*i is the end of string and j are the places space occurs
 arr2 stores such places in desending order
 and k  represents the number of times space or end of string character occurs	*/ 
int main()
{	int i,j,k,l,x,tt;
	char arr[100]="you picked the wrong house fool";
	int arr2[100]={ };
	for (i=0;i<100;i++)
		{if (arr[i]=='\0')
			break;}
	arr2[0]=i;
	k=1;
	for (j=i;j>0;j--)
		{if (arr[j]==' ')
			{arr2[k]=j;
			k+=1;}		}
	for (l=0;l<k-1;l++)
	{	for(x=arr2[l+1]+1;x<arr2[l];x++)
			{	printf("%c",arr[x]);}
		printf(" ");	
						}
	for (tt=0;tt<arr2[k-1];tt++)
		{printf("%c",arr[tt]);}
	printf("\n");	
	return 0;}	

