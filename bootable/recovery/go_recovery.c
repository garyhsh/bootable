
#include <errno.h>
#include <stdio.h>
#include <string.h>


extern int write_misc(char *reason);

int main(int argc, char** argv) {

	if ( write_misc("recovery")){		
		printf("go_recovery err!\n");
		return -1;
	}

	printf("go_recovery ok!\n");
	return 0;

}
