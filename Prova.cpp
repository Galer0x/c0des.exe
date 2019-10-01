#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float inserirARE3(float M1){
	float EFinal;
	
	printf("Digite a nota do Exame Final: \n");
	scanf("%f", &EFinal);
	return (M1+EFinal)/2;
}

float inserirARE2(){
	float parcial;
	float institucional;
	float soma;
	
	printf("Digite a nota parcial: (5,0)\n");
	scanf("%f", &parcial);
	printf("Digite a nota institucional: (5,0)");
	scanf("%f", &institucional);
	soma = parcial+institucional;
	return soma;
}

float inserirARE1(){
	float AVP1;
	float AVIObjetiva;
	float AVIDiscussiva;
	float soma;
	
	printf("Digite a nota da AP1: (4,0) \n");
	scanf("%f", &AVP1);
	printf("Digite a nota da AVI2 (Objetiva) (3,0): \n");
	scanf("%f", &AVIObjetiva);
	printf("Digite a nota da AVI2 (Discussiva) (3,0): \n");
	scanf("%f", &AVIDiscussiva);
	soma = AVP1+AVIObjetiva+AVIDiscussiva;
	return soma;
}

float inserirFrequencia(){
	float frequencia;
	
	printf("\n Digite a frequencia do aluno:\n");
	scanf("%f", &frequencia);
	return frequencia;
}

void menu(){
	int opcao;
	float frequencia;
	float ARE1 = 0;
	float ARE2 = 0;
	float ARE3 = 0;
	float media;
	int fezARE3 = 0;
	char mensagem[30];
	
	do {	
		printf("--------GERENCIADOR DE MEDIA ESCOLAR----------\n");
		printf("0 - Frequencia = %f\n", frequencia);
		printf("1 - 1 ARE = %f\n", ARE1);
		printf("2 - 2 ARE = %f\n", ARE2);
	    printf("3 - 3 ARE = %f (Se for preciso)\n", ARE3);		
		if(fezARE3 == 0){
			media = (ARE1+ARE2)/2;
			if(media < 7){
				strcpy(mensagem, "PRECISA FAZER A ARE 3!\n");
			} else {
				strcpy(mensagem, "APROVADO!\n");
			}
		} else {
			media = (ARE1+ARE2+ARE3)/3;
			if(media < 7){
				strcpy(mensagem, "REPROVADO!\n");
			} else {
				strcpy(mensagem, "APROVADO!\n");
			}
		}
		if(frequencia<70){
			strcpy(mensagem, "REPROVADO POR FALTA!\n");
		}
		printf(mensagem);
		printf("Media geral: %f\n", media);
		printf("Digite o numero da opcao que deseja preencher/alterar: \n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 0:
				frequencia = inserirFrequencia();	
			break;
			case 1:
				ARE1 = inserirARE1();
			break;
			case 2:
				ARE2 = inserirARE2();
			break;
			case 3:
				ARE3 = inserirARE3(media);
				fezARE3 = 1;
			break;
		}
		
		system("cls");
	}while(opcao != 4);
}

int main(){
	menu();
}
