#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000

int main(void){
	unsigned long int start;
	unsigned long int end;
	unsigned long int elapsed;
	
	int data[SIZE];
	int size=SIZE;
	int seed;
	int i,j,k,tmp;
	
	printf("Seed?=");
	scanf("%d",&seed);
	
	for(k=0;k<10;k++){
		srand(seed);
		for(i=0;i<size;i++){
			data[i]=rand()%100+1;
		}
		
		start=clock();
		for(i=0;i<size-1;i++){
			for(j=size-1;j>i;j--){
				if(data[j]<data[j-1]){
					tmp=data[j-1];
					data[j-1]=data[j];
					data[j]=tmp;
				}
			}
		}
		end=clock();
		elapsed=end-start;
		
		printf("ELAPSED TIME: %d\n",elapsed);
	}
	
	return 0;
}