#include <stdio.h>

#define N 2

struct gakusei{
	int gakuban;
	int math;
	int eng;
	float heikin;
}ns_gakusei[N];

int main(void){
	int i;
	int sum;
	float heikin;
	
	struct gakusei ns_2nen[N];
	
	for(i=0;i<N;i++){
		
		scanf("%d %d %d",&ns_2nen[i].gakuban,&ns_2nen[i].math,&ns_2nen[i].eng);
		
		sum=ns_2nen[i].math+ns_2nen[i].eng;
		heikin=(float)sum/2;
		printf("gakuban:%d heikin:%lf\n",ns_2nen[i].gakuban,heikin);
	};
		
	return 0;
}