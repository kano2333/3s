#include <stdio.h>

#define MAXLEN 64

int main(void){
	char data[MAXLEN];
	int i;
	
	printf("����������\n");
	scanf("%s",data);
	
	for(i=0;data[i]!='\0';i++);
	
	printf("��������%d��\n",i);
	
	return 0;
}