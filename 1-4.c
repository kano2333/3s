#include <stdio.h>
int mymin(int data[]){
	int minimum;
	int i;
	
	minimum=data[0];
	for(i=1;i<10;i++){
		if(data[i]<minimum){
			minimum=data[i];
		}
	}
	
	return minimum;
}

int mymax(int data[]){
	int maximum;
	int i;
	
	maximum=data[0];
	for(i=1;i<10;i++){
		if(data[i]>maximum){
			maximum=data[i];
		}
	}
	
	return maximum;
}

int mysum(int data[]){
	int sum;
	int i;
	
	sum=data[0];
	for(i=1;i<10;i++){
		sum=sum+data[i];
	}
	
	return sum;
}
int main(void){
	int data[]={41,69,28,33,23,7,52,13,55,9};
	int ans1;
	int ans2;
	int ans3;
	
	ans1=mymin(data);
	ans2=mymax(data);
	ans3=mysum(data);
	
	printf("The minimum number is %d.\n",ans1);
	printf("The maximum number is %d.\n",ans2);
	printf("The mysum number is %d.\n",ans3);
	
	return 0;
}