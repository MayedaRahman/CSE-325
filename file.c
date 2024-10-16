#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main ()
{
	int fd;
	char buf[10];
	 fd = open ("sample.txt",0_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	if (read(fd,but,10)== -1)
	{
	perror("read");
		return 1;
	}
	buf[10] = '\0';
	printf("Read: %\n", but);
	close(fd);
	return 0;
}
