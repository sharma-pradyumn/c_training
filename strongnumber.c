#include <stdio.h>
int main(){
	int n,nn,y,z,a,fact,sum,b;
	scanf("%d",&b);
	for (n=1;n<=b;n++)
	{	nn=n;
		sum=0;
	for (y=1;y<=n;y=y*10){
		nn=nn/y;
		z=nn%10;
		fact=1;
		for (a=1;a<=z;a++){
			fact=fact*a;	}
		sum+=fact;			} 
	if (sum==n)
		printf("%d \n",sum);			}
	return 0;
			}
