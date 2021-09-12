#include <stdio.h>
int main()
{char array[]="this is that";
char out[100]={"1"};
int i,len,flag,k,j;
len=sizeof(array)/sizeof(array[0]);
k=0;
for(i=0;i<len;i++)
	{	
		flag=0;
		for (j=0;j<i;j++)
			{if(array[i]==array[j])
				flag+=1;}
		if (flag==0)
			{out[k]=array[i];
			k++;}			}
len=sizeof(out)/sizeof(out[0]);
for (i=0;i<=k;i++)
		{printf("%c",out[i]);}	
printf("\n");
return 0;}
