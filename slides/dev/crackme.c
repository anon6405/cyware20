#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	if(argc == 2){
		if(strcmp(argv[1], "crackme@sector:443") == 0){
			printf("Congratulations, you have cracked the code.");
		  }
		else{
			printf("WRONG!");
		}
	}

	else{
		printf("Pass the key as argument");
	}
	return 0;
	
}
