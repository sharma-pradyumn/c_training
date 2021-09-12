#include <stdio.h>
int main()
{	int x,y,z,a,temp;
	scanf("%d",&a);
	x=0;
	y=1;
	for (z=0;z<=a;z++){
		printf("%d \n",y);
		temp=y;
		y=x+y;
		x=temp;}
	return 0;}
