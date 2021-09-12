#include <stdio.h>
#include <unistd.h>//for close
#include <fcntl.h>//for open
int main()
{	int i,j;
	int fd=open("myfile.txt",O_RDWR);
	char arr[20];
	char array[12]="Heplo World\n";
//	write(fd,array,sizeof(array[0])*12);
	j=read(fd,arr,12);
	printf("%d\n",j);
	for(i=0;i<=11;i++)
		printf("%c",arr[i]);
	close(fd);
	return 0;
}
