#include <stdio.h>
int main()
{ int age,difference;
printf("Enter your age \n");
scanf("%d",&age);
if (age>=18)
{	printf("You are eligible to vote.\n");}
else
{difference=18-age;
	printf("You are not eligible to vote.\n");
	printf("You can vote after %d ",difference);
	printf("years.\n");	 }
	
return 0; 	}	
