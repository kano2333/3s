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
		for(i=1;i<size;i++){
		tmp=data[i];
		for(j=i-1;j>=0;j--){
			if(data[j]>tmp){
				data[j+1]=data[j];
			}
			else{
				break;
			}
		}
			data[j+1]=tmp;
		}
		end=clock();
		elapsed=end-start;
		
		printf("ELAPSED TIME: %lu\n",elapsed);
	}
	
	return 0;
}