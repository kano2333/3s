#include <stdio.h>

void swap(int *v1,int *v2){
	int tmp;
	
	tmp=*v1;
	*v1=*v2;
	*v2=tmp;
}

int main(void){
	int a,b;
	
	printf("a?:");
	scanf("%d",&a);
	printf("b?:");
	scanf("%d",&b);
	
	printf("[Before] a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("[After] a=%d,b=%d\n",a,b);
	
	return 0;
}