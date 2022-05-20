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
	
	/*(A)�v���C���[�̃X�e�[�^�X�ݒ�*/
	struct PLAYER p;
	p.ENERGY=300;
	p.POISON=0;
	
	/*(B)�����X�^�[�̃X�e�[�^�X�ݒ�*/
	struct MONSTER m;
		m.ENERGY=200+rand()%201;
		printf("A monster appears!\n");
	
	while(1){
		/*(C)�v���C���[�̃X�e�[�^�X�\��*/
		printf("PLAYER ENERGY=%d\n",p.ENERGY);
		printf("PLAYER POISON=%d\n",p.POISON);
		
		/*(D)�v���C���[�̃^�[���̏���*/
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
		
		/*��������*/
		if(m.ENERGY<=0){
			printf("GAME CLEAR\n");
			return 0;
		}
		
		/*(E)�����X�^�[�̃^�[���̏���*/
		X=50+rand()%51;
		p.ENERGY=p.ENERGY-X;
		printf("A monster attacked! You received %d damage!\n",X);
		
		/*��������*/
		if(p.ENERGY<=0){
			printf("GAME OVER\n");
			return 0;
		}
		
		/*(F)�ł̏���*/
		if(p.POISON==0){
			p.POISON=rand()%100<30?1:0;
		}
		else if(p.POISON==0){
			p.ENERGY=p.ENERGY-10;
			printf("You received 10 damage by poison!\n");
		}
		
		/*��������*/
		if(p.ENERGY<=0){
			printf("GAME OVER\n");
			return 0;
		}
	}
	return 0;
}