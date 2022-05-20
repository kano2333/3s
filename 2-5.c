#include <stdio.h>
#include <math.h>

double myvar(int n,double num[]){
	double ave=0,var=0;
	int i;
	
	for(i=0;i<n;i++){
		ave+=num[i]/n;
	}
	
	for(i=0;i<n;i++){
		var+=pow(num[i]-ave,2)/n;
	}
	
	return var;
}

int main(void){
	int i,a;
	double *data,var;
	FILE *fp;
	fp=fopen("data.txt","r");
	if(fp==NULL){
		fprintf(stderr,"Cannot open file\n");
		return -1;
	}
	fscanf(fp,"%d",&a);
	data=(double *)malloc(sizeof(double)*a);
	for(i=0;i<a;i++){
		fscanf(fp,"%lf",&data[i]);
	}
	fclose(fp);
	printf("%lf\n",myvar(a,data));
	return 0;
}
	