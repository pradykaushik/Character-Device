/*Program to produce strings and write to the character device*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char* argv[]){
	char* input_string = argv[1];
	int input_string_length = atoi(argv[2]);
	int file_ptr = open("/dev/my_misc_device", O_WRONLY);
	if(file_ptr == -1){
		printf("Error: Device open failure!\n");
		exit(0);
	}
	int _iter = 0;
	while(1){
		printf("writing string %s\n", input_string);
		int number_of_bytes_written = write(file_ptr, input_string, input_string_length);
		if(number_of_bytes_written <= 0){
			printf("Error: Insufficient space!\n");
			exit(0);
		}
		else{
			printf("Iteration: %d\n", ++_iter);
			printf("--------------\n");
			printf("Write successful!\n");
			printf("Number of bytes written = %d\n", number_of_bytes_written);
		}
		sleep(1);
	}
	close(file_ptr);
	return 0;
}
