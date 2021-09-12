#include <stdio.h>
int main()
{char array[]="this is that";
char out[100]={0};
int i,len,flag,k,j;
len=sizeof(array)/sizeof(array[0]);
k=0;
for(i=0;i<len;i++)
	out[int(array[i])]=out[int(array[i])]+1;
len=sizeof(out)/sizeof(out[0]);
for (i=0;i<100;i++)
		{if(out[i]>1)	
			printf("%c",i);}	
printf("\n");
return 0;}
