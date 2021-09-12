#include <stdio.h>
int main ()
{
	int x,n,prod,len,j,jj,nn;
	prod=0;
	len=0;
	x=1;
	j=10000;
	jj=10000;
	scanf("%d",&n);
	nn=n;
	for (j=1;j<=nn;j=j*10)
	{	x=n%10;
		n=n/10;
		prod=prod+x*jj;
		jj=jj/10;	}
	prod=prod/jj;
	prod=prod/10;
	printf("%d \n",prod);
	return 0;	}
