#include <stdio.h>

struct PLAYER{
	int ENERGY;
	int POISON;
}p;

struct MONSTER{
	int ENERGY;
}m;


int main(void){
	unsigned seed;
	printf("Seed?=\n");
	scanf("%d",&seed);
	srand(seed);
	
	/*(A)プレイヤーのステータス設定*/
	struct PLAYER p;
	p.ENERGY=300;
	p.POISON=0;
	
	/*(B)モンスターのステータス設定*/
	struct MONSTER m;
		m.ENERGY=200+rand()%201;
		printf("A monster appears!\n");
	
	while(1){
		/*(C)プレイヤーのステータス表示*/
		printf("PLAYER ENERGY=%d\n",p.ENERGY);
		printf("PLAYER POISON=%d\n",p.POISON);
		
		/*(D)プレイヤーのターンの処理*/
		int command;
		int X;
		printf("Command? -> 1:Attack 2:Heal 3:Cure Poison\n");
		scanf("%d",&command);
	
		if(command==1){
			X=50+rand()%51;
			m.ENERGY=m.ENERGY-X;
			printf("You attacked! A monster received %d damage!\n",X);
		}
		else if(command==2){
			X=100+rand()%101;
			p.ENERGY=p.ENERGY+X;
			printf("Your ENERGY has recovered.\n");
		}
		else if(command==3){
			p.POISON=0;
			printf("Your poison was cured!\n");
		}
		else{
			printf("Miss!\n");
		}
		
		/*生死判定*/
		if(m.ENERGY<=0){
			printf("GAME CLEAR\n");
			return 0;
		}
		
		/*(E)モンスターのターンの処理*/
		X=50+rand()%51;
		p.ENERGY=p.ENERGY-X;
		printf("A monster attacked! You received %d damage!\n",X);
		
		/*生死判定*/
		if(p.ENERGY<=0){
			printf("GAME OVER\n");
			return 0;
		}
		
		/*(F)毒の処理*/
		if(p.POISON==0){
			p.POISON=rand()%100<30?1:0;
		}
		else if(p.POISON==0){
			p.ENERGY=p.ENERGY-10;
			printf("You received 10 damage by poison!\n");
		}
		
		/*生死判定*/
		if(p.ENERGY<=0){
			printf("GAME OVER\n");
			return 0;
		}
	}
	return 0;
}