#include <stdio.h>
int main()
{	char arr[5]="hello";
	int x=0;
	*(arr+2)='a';
	printf("%s",arr);
	return 0;	}
