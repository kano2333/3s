#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int Bsearch(int data[],int size,int n);
void output2(int n,int ans);

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
	int n;
	int ans;
	
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
	
	printf("Search Number?");
	scanf("%d",&n);
	
	ans=Bsearch(data,size,n);
	
	output2(n,ans);
	
	return 0;
}

int Bsearch(int data[],int size,int n){
	int ans=-1;
	int m;
	int left=0;
	int right=size-1;
	
	while(left<=right){
		m=(left+right)/2;
		if(data[m]==n){
			ans=m;
			break;
		}
		else if(data[m]<n){
			left=m+1;
		}
		else{
			right=m-1;
		}
	}
	return ans;
}

void output2(int n,int ans){
	if(ans==-1){
		printf("%d is not found.\n",n);
	}
	else{
		printf("%d is found in data[%d].\n",n,ans);
	}
}