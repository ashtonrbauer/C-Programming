/* Estimates the period of a XOR encryption */

#include <stdio.h>

void main(int argc, char**argv)
{
	if(argc!=2){
		printf("\nError. Incorrect number of arguments\n");
	}else{
		FILE* in_file;	
		int shift=1, count=0, max=0, period, match_cnt=0, i, j, p;
		in_file=fopen(argv[1], "r");

		while((p = fgetc(in_file) != EOF))
			++count;
		printf("Count: %d", count);
		printf("\n");
		char a[count];
		in_file=fopen(argv[1], "r");
		while((p = fgetc(in_file)) != EOF){
			if(i == count)
				break;
			a[i++] = p;
		}
		char b[count];
		while(shift < 11){
			for(i = 0; i < count; i++){
				j = i + shift;
				if(j >= count)
					j -= count;
				b[j] = a[i];
			}
			i = 0;
			while(i < count){
				if(a[i] == b[i])
					match_cnt++;
				i++;
			}
			if(match_cnt > max){
				max = match_cnt;
				period = shift;
			}
			match_cnt = 0;
			shift++;
		}
		printf("Maximum amount of matches: %d, estimated period: %d\n", max, period);
			
	}
}
