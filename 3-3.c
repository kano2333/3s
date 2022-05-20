#include <stdio.h>

int Bsearch(int data[],int size,int n);

void output(int n,int ans);

int main(void){
	int data[]={4,6,9,10,11,14,17,19,21,26};
	int size=sizeof(data)/sizeof(int);
	int n;
	int ans;
	
	printf("Search Number?:");
	scanf("%d",&n);
	
	ans=Bsearch(data,size,n);
	
	output(n,ans);
	
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

void output(int n,int ans){
	if (ans==-1){
		printf("%d is not found.\n",n);
	}
	else{
		printf("%d is found in data[%d].\n",n,ans);
	}
}