#include <stdio.h>
#include <fcntl.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>

void main(int argc, char *argv[]){
	char* buff;
	int bytes_to_read = atoi(argv[1]);
	buff = (char*)malloc(bytes_to_read*sizeof(char));
	int _iteration = 0;
	int fp = open("/dev/my_misc_device",O_RDWR);
	if(fp == -1){
		printf("Error: Could not open the file!\n");
		exit(0);
	}

	while(1){
		printf("\nIteration %d\n", _iteration++);
		printf("------------\n");
       		int bytes_actually_read = 0;
		bytes_actually_read = read(fp,&buff,bytes_to_read);
		if(bytes_actually_read >0){
			printf("bytes read = %d: ", bytes_actually_read);
			printf("%s\n", &buff);
			printf("----------------------------------");	
		}
		else{
			printf("No characters read!\n");
		}
		sleep(1);
	}
	close(fp);
	return ;
}

