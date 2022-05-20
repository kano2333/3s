#include <stdio.h>

#define MAXLEN 64

int main(void){
	char data[MAXLEN];
	int i;
	
	printf("•¶š—ñ‚ğ“ü—Í\n");
	scanf("%s",data);
	
	for(i=0;data[i]!='\0';i++);
	
	printf("•¶š”‚Í%dŒÂ\n",i);
	
	return 0;
}