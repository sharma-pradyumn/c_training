#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
struct student
{	
	int percentage;
	name=(char *)malloc(5*sizeof(char));

};
int main()
{	int i,j;
	struct student array[3],array2[3];
	array->percentage=90;
	*(array->name)="Ram";
	(array+1)->percentage=85;
	*((array+1)->name)="Rahul";
	(array+2)->percentage=80;
	(array+2)->name="Ramesh";
	int fd=open("mydatafile.txt",O_WRONLY);
	write(fd,array,sizeof(struct student)*3);
	printf("%d\n",fd);
	close(fd);
	int f=open("mydatafile.txt",O_RDONLY);
	read(f,array2,sizeof(struct student)*3);
	printf("%d %s %d %s %d %s",array->percentage,array->name,(array+1)->percentage,(array+1)->name,(array+2)->percentage,(array+2)->name);
	close(f);
}	

