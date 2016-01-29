/* Performs XOR encryption */

#include <string.h>
#include <stdio.h>

#define KEY '&'

int main(int argc, char**argv)
{
	if(argc!=4){
		printf("\nError. Incorrect number of arguments\n");
		return 1;
	}else{
		FILE* in_file;
		FILE* out_file;
		int key_length = strlen(argv[1]);
		int key_count=0;
		int encrypt_byte;
		in_file=fopen(argv[2], "r");
		out_file=fopen(argv[3], "w");
	
		while((encrypt_byte = fgetc(in_file)) != EOF){
			fputc(encrypt_byte ^ argv[1][key_count++], out_file);
			if(key_count == key_length)
				key_count = 0;
		}
		return 0;
	}
}
