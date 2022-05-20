#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fortune(){
	if((rand()%100)<11){
		return 0;
	}
	else if((rand()%100)<33){
		return 1;
	}
	else if((rand()%100)<67){
		return 2;
	}
	else if((rand()%100)<89){
		return 3;
	}
	else return 4;
}

int main(){
	unsigned seed;
	char*a[]={"Worstluck","Bad luck","Good luck","Better luck","Excellent luck"};
	printf("Seed?=");
	scanf("%d",&seed);
	srand(seed);
	printf("%s\n",a[fortune()]);
	return 0;
}