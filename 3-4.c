#include <stdio.h>

struct gakusei{
	int gakuban;
	int math;
	int eng;
	double heikin;
}ns_gakusei[20];

int main(void){
	int i;
	int n;
	int size=20;
	double sum;
	int left=0;
	int right=size-1;
	int m;
	double ans=-1;
	
	printf("Search Number?:");
	scanf("%d",&n);
	
	struct gakusei ns_2nen[20];
	
	FILE *fp;
	fp=fopen("data.txt","r");
	if(fp==NULL){
		fprintf(stderr,"File Error\n");
		return -1;
	}
	for(i=0;i<20;i++){
		fscanf(fp,"%d",&ns_2nen[i].gakuban);
		fscanf(fp,"%d",&ns_2nen[i].math);
		fscanf(fp,"%d",&ns_2nen[i].eng);
		
		sum=ns_2nen[i].math+ns_2nen[i].eng;
		ns_2nen[i].heikin=sum/2;
	}
	while(left<=right){
		m=(left+right)/2;
		if(ns_2nen[m].gakuban==n){
			ans=ns_2nen[m].heikin;
			break;
		}else if(ns_2nen[m].gakuban<n){
			left=m+1;
		}else{
			right=m-1;
		}
	}
	if(ans==-1){
		printf("Not Found.\n");
	}else{
		printf("heikin:%.1lf\n",ans);
	}
	fclose(fp);
	
	return 0;
}
