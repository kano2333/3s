#include <stdio.h>

#define MAXLEN 64

int main(void){
	char data[MAXLEN];
	int i;
	
	printf("文字列を入力\n");
	scanf("%s",data);
	
	for(i=0;data[i]!='\0';i++);
	
	printf("文字数は%d個\n",i);
	
	return 0;
}