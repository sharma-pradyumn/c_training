#include <stdio.h>
int main(){
	int x,y,z,sum;
	scanf("%d",&x);
	for (y=2;y<=x;y++){
		sum=0;
		for (z=1;z<y;z++){
			if (y%z==0){
				sum+=z; }	}
		if (sum==y)
			printf("%d \n",y);}
	return 0;}
