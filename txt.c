#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
	char buff[10];
	read(0,buff,10);
	write(1,buff,10);
	return 0;
}
