#include <stdio.h>
#include <string.h>

int main(void){
	char typing[32];
	char data[3][32]={"apple","orange","banana"};
	int i;
	
	for(i=0;i<3;i++){
	printf("%s\n",data[i]);
	scanf("%s",typing);
	
		while(strcmp(data[i],typing)!=0){
			printf("MISS\n");
			scanf("%s",typing);
		}
		printf("OK\n");
	}
	return 0;
}