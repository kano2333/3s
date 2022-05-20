#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void output(int data[],int size){
	int i;
	
	for(i=0;i<size;i++){
		printf("%3d",data[i]);
	}
	printf("\n");
}

int main(void){
	int data[SIZE];
	int size=SIZE;
	int seed;
	int i,j,tmp;
	
	printf("Seed?=");
	scanf("%d",&seed);
	srand(seed);
	for(i=0;i<size;i++){
		data[i]=rand()%100+1;
	}
	
	output(data,size);
	
	for(i=0;i<size-1;i++){
		for(j=size-1;j>i;j--){
			if(data[j]<data[j-1]){
				tmp=data[j-1];
				data[j-1]=data[j];
				data[j]=tmp;
			}
		}
	}
	
	output(data,size);
	
	return 0;
}