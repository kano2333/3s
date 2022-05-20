#include <stdio.h>
#include <float.h>

double mymin(double data[]);
double mymax(double data[]);
double mysum(double data[]);
double mymean(double data[]);
double myvar(double data[]);

int main(void){
	double data[]={11.1, 23.3, 5.7, 7.7, 9.4, 1.2, 20.8, 15.3, 3.5, 8.6};
	double ans1;
	double ans2;
	double ans3;
	double ans4;
	double ans5;
	
	ans1=mymin(data);
	ans2=mymax(data);
	ans3=mysum(data);
	ans4=mymean(data);
	ans5=myvar(data);
	
	printf("The minimum number is %.1lf\n",ans1);
	printf("The maximum number is %.1lf\n",ans2);
	printf("The sum number is %.1lf\n",ans3);
	printf("The mean number is %.2lf\n",ans4);
	printf("The variance number is %.4lf\n",ans5);
	
	return 0;
}
double mymin(double data[]){
	double minimum;
	int i;
	
	minimum=data[0];
	for(i=1;i<10;i++){
		if(data[i]<minimum){
			minimum=data[i];
		}
	}
	
	return minimum;
}

double mymax(double data[]){
	double maximum;
	int i;
	
	maximum=data[0];
	for(i=1;i<10;i++){
		if(data[i]>maximum){
			maximum=data[i];
		}
	}
	
	return maximum;
}

double mysum(double data[]){
	double sum;
	int i;
	
	sum=data[0];
	for(i=1;i<10;i++){
		sum=sum+data[i];
	}
	
	return sum;
}

double mymean(double data[]){
	double mean;
	int i;
	
	mean=mysum(data);
	mean=mean/10;
	
	return mean;
}
	
double myvar(double data[]){
	double mean,variance,x;
	int i;
	
	variance=0;
	mean=mymean(data);
	for(i=0;i<10;i++){
		x=data[i]-mean;
		x=x*x;
		variance=variance+x;
	}
	
	variance=variance/10;
	
	return variance;
}