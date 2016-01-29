/* Performs XOR decryption. This code was not commented at all while I was
 * working through it. I was trying to use logic in order to break a XOR enyrption
 * by creating an amount of arrays based on the period. I could get the letters of
 * the key, but not in the correct order. Still sifting for error. */

#include <stdio.h>

int main(int argc, char**argv)
{
	if(argc!=3){
		printf("\nError. Incorrect number of arguments\n");
		return 1;
	}else{
		FILE* in_file;	
		int count=0, i, j, p;
		in_file=fopen(argv[1], "r");

		while((p = fgetc(in_file) != EOF))
			++count;
		//printf("Count: %d", count);
		//printf("\n");
		char a[count];
		in_file=fopen(argv[1], "r");
		while((p = fgetc(in_file)) != EOF){
			if(i == count)
				break;
			if(p == 32){}
			else{a[i++] = p;}
		}
		j = 0;
		for(i =0; i<2200; i++){
			//printf("%c",a[i]);	
			j++;
		}
		//printf("%d count\n", j);
		//int soa = 2200/6;
		char key1[2200/12],key2[2200/12],key3[2200/12],key4[2200/12],key5[2200/12],key6[2200/12];
		char key7[2200/12],key8[2200/12], key9[2200/12],key10[2200/12],key11[2200/12],key12[2200/12];
		for(i = 0; i < j; i++){
			if(i%12 == 0){
				key1[i/12] = a[i];
			}
			if(i%12 == 1){
				key2[i/12] = a[i];
			}if(i%12 == 2){
				key3[i/12] = a[i];
			}if(i%12 == 3){
				key4[i/12] = a[i];
			}if(i%12 == 4){
				key5[i/12] = a[i];
			}if(i%12 == 5){
				key6[i/12] = a[i];
			}if(i%12 == 6){
				key7[i/12] = a[i];
			}if(i%12 == 7){
				key8[i/12] = a[i];
			}if(i%12 == 8){
				key9[i/12] = a[i];
			}if(i%12 == 9){
				key10[i/12] = a[i];
			}if(i%12 == 10){
				key11[i/12] = a[i];
			}if(i%12 == 11)
				key12[i/12] = a[i];
		}
		//for(i=0;i<2200/12;i++)
		//	printf("%c%c%c%c%c%c%c%c%c%c%c\n",key1[i],key2[i],key3[i],key4[i],key5[i],key6[i],key7[i],key8[i],key9[i],key10[i],key11[i]);
		
		for(i=0;i<sizeof(key1);i++)
			printf("%c",key1[i]);
		printf("\n");
		for(i=0;i<sizeof(key2);i++)
			printf("%c",key2[i]);
		printf("\n");
		for(i=0;i<sizeof(key3);i++)
			printf("%c",key3[i]);
		printf("\n");
		for(i=0;i<sizeof(key4);i++)
			printf("%c",key4[i]);
		printf("\n");
		for(i=0;i<sizeof(key5);i++)
			printf("%c",key5[i]);
		printf("\n");
		for(i=0;i<sizeof(key6);i++)
			printf("%c",key6[i]);
		printf("\n");
		for(i=0;i<sizeof(key7);i++)
			printf("%c",key7[i]);
		printf("\n");
		for(i=0;i<sizeof(key8);i++)
			printf("%c",key8[i]);
		printf("\n");
		for(i=0;i<sizeof(key9);i++)
			printf("%c",key9[i]);
		printf("\n");
		for(i=0;i<sizeof(key10);i++)
			printf("%c",key10[i]);
		printf("\n");
		for(i=0;i<sizeof(key11);i++)
			printf("%c",key11[i]);
		printf("\n");
		for(i=0;i<sizeof(key12);i++)
			printf("%c",key12[i]);
		printf("\n");
		int one_ch=0,two_ch=0,three_ch=0,four_ch=0,five_ch=0,six_ch=0;
		int seven_ch=0,eight_ch=0,nine_ch=0,ten_ch=0,eleven_ch=0,twelve_ch=0;
		int k1_mx=0,k2_mx=0,k3_mx=0,k4_mx=0,k5_mx=0,k6_mx=0;
		int k7_mx=0,k8_mx=0,k9_mx=0,k10_mx=0,k11_mx=0,k12_mx=0;
		//count = 0;
		for(j = 0; j < 128; j++){
			i = 0;
			int k1_cnt=0;
			while(i < sizeof(key1)){	
				if(key1[i] == j)
					k1_cnt++;
				i++;
			}
			if(k1_cnt > k1_mx){
				k1_mx = k1_cnt;
				one_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k2_cnt=0;
			while(i < sizeof(key2)){	
				if(key2[i] == j)
					k2_cnt++;
				i++;
			}
			if(k2_cnt > k2_mx){
				k2_mx = k2_cnt;
				two_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k3_cnt=0;
			while(i < sizeof(key3)){	
				if(key3[i] == j)
					k3_cnt++;
				i++;
			}
			if(k3_cnt > k3_mx){
				k3_mx = k3_cnt;
				three_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k4_cnt=0;
			while(i < sizeof(key4)){	
				if(key4[i] == j)
					k4_cnt++;
				i++;
			}
			if(k4_cnt > k4_mx){
				k4_mx = k4_cnt;
				four_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k5_cnt=0;
			while(i < sizeof(key1)){	
				if(key5[i] == j)
					k5_cnt++;
				i++;
			}
			if(k5_cnt > k5_mx){
				k5_mx = k5_cnt;
				five_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k6_cnt=0;
			while(i < sizeof(key6)){	
				if(key6[i] == j)
					k6_cnt++;
				i++;
			}
			if(k6_cnt > k6_mx){
				k6_mx = k6_cnt;
				six_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k7_cnt=0;
			while(i < sizeof(key7)){	
				if(key7[i] == j)
					k7_cnt++;
				i++;
			}
			if(k7_cnt > k7_mx){
				k7_mx = k7_cnt;
				seven_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k8_cnt=0;
			while(i < sizeof(key8)){	
				if(key8[i] == j)
					k8_cnt++;
				i++;
			}
			if(k8_cnt > k8_mx){
				k8_mx = k8_cnt;
				eight_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k9_cnt=0;
			while(i < sizeof(key9)){	
				if(key9[i] == j)
					k9_cnt++;
				i++;
			}
			if(k9_cnt > k9_mx){
				k9_mx = k9_cnt;
				nine_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k10_cnt=0;
			while(i < sizeof(key10)){	
				if(key10[i] == j)
					k10_cnt++;
				i++;
			}
			if(k10_cnt > k10_mx){
				k10_mx = k10_cnt;
				ten_ch = j;
			}
		}
		for(j = 0; j < 128; j++){
			i = 0;
			int k11_cnt=0;
			while(i < sizeof(key11)){	
				if(key11[i] == j)
					k11_cnt++;
				i++;
			}
			if(k11_cnt > k11_mx){
				k11_mx = k11_cnt;
				eleven_ch = j;
			}
		}
		/*for(j = 0; j < 128; j++){
			i = 0;
			int k12_cnt=0;
			while(i < sizeof(key12)){	
				if(key12[i] == j)
					k12_cnt++;
				i++;
			}
			if(k12_cnt > k12_mx){
				k12_mx = k12_cnt;
				twelve_ch = j;
			}
		}*/
		printf("Key1: %c\nKey2: %c\nKey3: %c\nKey4: %c\nKey5: %c\nKey6: %c\n",one_ch^' ',two_ch^' ',three_ch^32,four_ch^32,five_ch^32,six_ch^32);
		printf("Key7: %c\nKey8: %c\nKey9: %c\nKey10: %c\nKey11: %c\nKey12: %c\n",seven_ch^32,eight_ch^32,nine_ch^32,ten_ch^32,eleven_ch^32,twelve_ch);
		printf("\n");
	return 0;
	}
}
