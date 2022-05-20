#include <stdio.h>

int main(void){
	int a,b,r;
	
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);

	if(a<b){
			printf("ERROR\n");
			return -1;
	}
	
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
		
		printf("a=%d b=%d r=%d\n",a,b,r);
	}
	printf("GCD=%d\n",b);
	return 0;
}