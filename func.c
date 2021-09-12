#include <stdio.h>
#include <math.h>
int reverse(int n,int rev)
{	if (n==0)
	{	return rev;	}
	else
	{	int i,x;
		int len;
		len=log10(n);
		x=n%10;
		rev=rev+x*pow(10,len);
		return	reverse(n/10,rev);}	}
int main()
{	int x,y;
	scanf("%d",&x);
	y=reverse(x,0);
	printf("%d \n",y);
	return 0;	}
