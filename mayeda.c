#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>


int main()
{
	int retValue;
	retValue=mkdir("PSC/Dir3",0777);
	if (retValue == -1)
		printf("ERROR\n");
		return 0;
}
