#include <stdio.h>
int func(int n)
{	int count,i,ii,x,digit,j;
	count=0;
	for(ii=0;ii<=n;ii++)
	{	i=ii;

		for (j=1;j<=ii;j=j*10)
		{	digit=i%10;
			i=i/10;
			if (digit==1)
				count+=1;
						}	}
	return count;						}
int main()
{	int t,nn,ii,yy;
	scanf("%d",&t);
	for(ii=0;ii<t;ii++)
	{	scanf("%d",&nn);
		yy=func(nn);
		printf("%d \n ",yy);}
	return 0;			}

/*for (j=1;j<=nn;j=j*10)
	{	x=n%10;
		n=n/10;;*/

