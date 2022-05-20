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
	int i,j,k,m,min,tmp;
	
	printf("Seed?=");
	scanf("%d",&seed);
	
	for(m=0;m<10;m++){
		srand(seed);
		for(i=0;i<size;i++){
			data[i]=rand()%100+1;
		}
		
		start=clock();
		for(i=0;i<size-1;i++){
		min=data[i];
		k=i;
		for(j=i+1;j<size;j++){
			if(min>data[j]){
				min=data[j];
				k=j;
			}
		
		}
		tmp=data[i];
		data[i]=data[k];
		data[k]=tmp;
		}
		end=clock();
		elapsed=end-start;
		
		printf("ELAPSED TIME: %lu\n",elapsed);
	}
	
	return 0;
}