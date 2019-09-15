// TODOS OS CREDITOS A:  MARCOS ANDRE MARQUES CELESTINO  - GitHub: Galer0x 

#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
	
	int produto,qtd;
	float somatorio,st1,st2,st3;
	float st4,st5,st6;
	double soma;
	char resposta;
	
	cout << "SEJA BEM BINDO" << endl;
	
	cout << "LANCHE JESUS ME DEU" << endl;
	
	
	
	system("pause");
	
	system ("cls");
	
	cout << "\n";
	
		cout << "CARREGANDO CARDAPIO..." << endl;
		
	cout << "\n";
		
	system("pause");	
	
	system("cls");
	
	inicio:
	
	cout << "		CARDAPIO DO LANCHE			\n";
	
	cout << "\n";
	
	cout << "ESPECIFICACAO		CODIGO		PRECO \n";
	cout << "1- CACHORRO QUENTE	100		1.20R$\n";
	cout << "2- BAURU SIMPLES	101		1.30R$\n";
	cout << "3- BAURU COM OVO 	102		1.50R$\n";
	cout << "4- HAMBURGUER		103		1.20R$\n";
	cout << "5- CHEESEBURGUER	104		1.30R$\n";
	cout << "6- REFRIGERANTE		105		1.00R$\n";
	cout << "0 - S A I R";
	
	cout << "\n";


	cout << "INFORME O CODIGO DO PRODUTO DESEJADO" << endl;
	cin >> produto;
	
	cout << "\n";
	switch (produto)
	{
		case 100:
			cout << "\n";
			cout << "VOCE ESCOLHEU: CACHORRO QUENTE " << endl;
			cout << "INFORME A QUANTIDADE: " << endl;
			cin >> qtd;
			st1=(qtd*1.20);
			cout << "VOCE DESEJA: " << qtd << " UNI DO PRODUTO 100, TOTALIZANDO: " << st1 << endl;	
		break;		
			}				
			
	switch (produto)
	{
		case 101:
			cout << "\n";
			cout << "VOCE ESCOLHEU: BAURU SIMPLES " << endl;
			cout << "INFORME A QUANTIDADE: " << endl;
			cin >> qtd;
			st2=(qtd*1.30);
			cout << "VOCE DESEJA: " << qtd << " UNI DO PRODUTO 100, TOTALIZANDO: " << st2 << endl;	
		break;		
			}	
				
	switch (produto)
	{
		case 102:
			cout << "\n";
			cout << "VOCE ESCOLHEU: BAURU COM OVO " << endl;
			cout << "INFORME A QUANTIDADE: " << endl;
			cin >> qtd;
			st3=(qtd*1.50);
			cout << "VOCE DESEJA: " << qtd << " UNI DO PRODUTO 100, TOTALIZANDO: " << st3 << endl;	
		break;		
			}		
			
	switch (produto)
	{
		case 103:
			cout << "\n";
			cout << "VOCE ESCOLHEU: HAMBURGUER	 " << endl;
			cout << "INFORME A QUANTIDADE: " << endl;
			cin >> qtd;
			st4=(qtd*1.20);
			cout << "VOCE DESEJA: " << qtd << " UNI DO PRODUTO 100, TOTALIZANDO: " << st4 << endl;	
		break;		
			}		
			
	switch (produto)
	{
		case 104:
			cout << "\n";
			cout << "VOCE ESCOLHEU: CHEESEBURGUER	 " << endl;
			cout << "INFORME A QUANTIDADE: " << endl;
			cin >> qtd;
			st5=(qtd*1.30);
			cout << "VOCE DESEJA: " << qtd << " UNI DO PRODUTO 100, TOTALIZANDO: " << st5 << endl;	
		break;		
			}		
		
	switch (produto)
	{
		case 105:
			cout << "\n";
			cout << "VOCE ESCOLHEU: REFRIGERANTE	 " << endl;
			cout << "INFORME A QUANTIDADE: " << endl;
			cin >> qtd;
			st6=(qtd*1.00);
			cout << "VOCE DESEJA: " << qtd << " UNI DO PRODUTO 100, TOTALIZANDO: " << st6 << endl;	
		break;		
			}		
			
	switch (produto)
	{
		case 0:
	system("cls");
	cout << "CODIGO INVALIDO!" << endl;
	break;
	}
	
		
	
	{
			
		do{
		soma=(st1+st2+st3+st4+st5+st6);
		
		cout << "\n";
		
		cout << "DESEJA COMPRAR + alguma coisa? resp com s/n " << endl;
			
		cin >> resposta;
	
		if(resposta=='s' or resposta=='S'){
				cout << "\n";
				cout << "OK, VOLTANDO PRO INICIO..." << endl;
				cout << "DIVIDA ATUAL: " << soma << endl;
				cout << "\n";				
				system("pause");
				system("cls");
				goto inicio;
			}else if(resposta=='n' or resposta=='N'){
				cout << "FINALIZANDO...";
				cout << "\n";
				cout << "VALOR TOTAL A PAGAR: " << soma << endl;
				cout << "\n";
				cout << " OBRIGADO PELA PREFERENCIA ®" << endl;
				break;	
			}
	}while (qtd>0);
	
}
	
	


	
	
}
