#include <stdio.h>

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

int main(void){
	int data[]={41,69,28,33,23,7,52,13,55,9};
	int ans;
	
	ans=mymax(data);
	
	printf("The maximum number is %d.\n",ans);
	
	return 0;
}