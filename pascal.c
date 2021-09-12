#include <stdio.h>
int fact(nn){
	int fact,q,prod;
	fact=1;
	if (nn==0 )
		fact=1;
	else{
		for(q=1;q<=nn;q++)
			fact=fact*q;	}
	return fact;}

int main(){
	int i,j,n,x;
	scanf("%d",&n);
	for (i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			x=fact(i)/(fact(j)*fact(i-j));
			printf("%d ",x);	}
		printf("\n");	}
	return 0;}
