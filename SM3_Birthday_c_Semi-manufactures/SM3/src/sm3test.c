
#include <string.h>
#include <stdio.h>
#include "sm3.h"

#define _CRT_SECURE_NO_WARNINGS

int main( int argc, char *argv[] )
{
	unsigned char *input = "abc";
	int ilen = 3;
	unsigned char output[32];
	int i;
	sm3_context ctx;
	sm3_context ctx1;
	sm3_context ctx2;
	/*
	char c;
	int ilen1 = 64;
	unsigned char output1[32];
	unsigned char output2[32];
	int n = 1;
	int k = 1000;
	int m = 2 ^ 16;
	while (n && k) {
		while (n && m) {
			sm3_starts(&ctx1);
			sm3_starts(&ctx2);
			for (int j = 0; j < ilen1; j++) {
				c = 'a' + rand() % 26;
				sm3_update(&ctx1, c, 1);

			}
			sm3_finish(&ctx1, output1);
			for (int j = 0; j < ilen1; j++) {
				c = 'a' + rand() % 26;
				sm3_update(&ctx2, c, 1);
			}
			sm3_finish(&ctx2, output2);
			memset(&ctx1, 0, sizeof(sm3_context));
			memset(&ctx2, 0, sizeof(sm3_context));
			if ((output1[0] == output1[0]) && (output1[1] == output1[1]) && (output1[2] == output1[2])) {
				printf(&ctx1);
				printf(&ctx2);
				n = 0;
			}

			m--;
		}
		k--;
	}
	*/



	/*
	unsigned char* input1 = "";
	unsigned char* input2 = "";
	while (n && k) {
		while (n && m) {
			for (int j = 0; j < ilen1; j++) {
				c = 'a' + rand() % 26;
				input1 = input1 + c;
			}
			for (int j = 0; j < ilen1; j++) {
				c = 'a' + rand() % 26;
				input2 = input2 + c;
			}
			sm3_starts(&ctx);
			for (i = 0; i < 16; i++)
				sm3_update(&ctx, "abcd", 4);
			sm3_finish(&ctx, output);
			memset(&ctx, 0, sizeof(sm3_context));
			unsigned char output1[32];
			unsigned char output2[32];
			sm3(input1, ilen1, output1);
			sm3(input2, ilen1, output2);
			if ((output1[0] == output1[0]) && (output1[1] == output1[1]) && (output1[2] == output1[2])) {
				printf(input1);
				printf(input2);
				n = 0;
			}
			m--;
		}
		k--;
	}
	*/
	
	/*
	printf("Message:\n");
	printf("%s\n", input);

	sm3(input, ilen, output);
	printf("Hash:\n   ");
	for (i = 0; i < 32; i++)
	{
		printf("%02x", output[i]);
		if (((i + 1) % 4 ) == 0) printf(" ");
	}
	printf("\n");

	printf("Message:\n");
	for (i = 0; i < 16; i++)
		printf("abcd");
	printf("\n");

	sm3_starts( &ctx );
	for (i = 0; i < 16; i++)
		sm3_update( &ctx, "abcd", 4 );
	sm3_finish( &ctx, output );
	memset( &ctx, 0, sizeof( sm3_context ) );

	printf("Hash:\n   ");
	for (i = 0; i < 32; i++)
	{
		printf("%02x", output[i]);
		if (((i + 1) % 4 ) == 0) printf(" ");
	}
	printf("\n");
	*/

	system("pause");
	return 0;
}



