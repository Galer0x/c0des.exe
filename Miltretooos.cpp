#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int cod; 
	float p,qtd,parcial;
	char opc; 
	
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
	
	cout << "\n";
	
	cout << "INFORME O CODIGO DO PRODUTO OU DIGITE 0 PARA SAIR: " << endl;
	cin >> cod;
	
	if ( cod == 0){
		if ( parcial > 0){
			cout << endl; 
			system("cls");
			cout << "SAINDO..." << endl;
			cout << "TOTAL A PAGAR: " << parcial << " R$" << endl;	
			cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS";
		}else{
			cout << endl; 
			system("cls");
			cout << "SAINDO..." << endl;
			cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS";
		}
	return 0;
}
	switch (cod)
	{
	case 100:
		cout << endl;
		cout << "VOCE ESCOLHEU: CACHORRO QUENTE " << endl;
		cout << "INFORME A QTD DESEJADA: " << endl;
		cin >> qtd;
		p=(1.20*qtd);
		cout << "COMPRA REALIZADA COM SUCESSO! " << endl; 
		break;
	case 101:
		cout << endl;
		cout << "VOCE ESCOLHEU: BAURU SIMPLES " << endl;
		cout << "INFORME A QTD DESEJADA: " << endl;
		cin >> qtd;
		p=(1.30*qtd);
		cout << "COMPRA REALIZADA COM SUCESSO! " << endl; 
		break;
	case 102:
		cout << endl;
		cout << "VOCE ESCOLHEU: BAURU COM OVO " << endl;
		cout << "INFORME A QTD DESEJADA: " << endl;
		cin >> qtd;
		p=(1.50*qtd);
		cout << "COMPRA REALIZADA COM SUCESSO! " << endl; 
		break;	
	case 103:
		cout << endl;
		cout << "VOCE ESCOLHEU: HAMBURGUER " << endl;
		cout << "INFORME A QTD DESEJADA: " << endl;
		cin >> qtd;
		p=(1.20*qtd);
		cout << "COMPRA REALIZADA COM SUCESSO! " << endl; 
		break;
	case 104:
		cout << endl;
		cout << "VOCE ESCOLHEU: CHESEEBURGUER " << endl;
		cout << "INFORME A QTD DESEJADA: " << endl;
		cin >> qtd;
		p=(1.30*qtd);
		cout << "COMPRA REALIZADA COM SUCESSO! " << endl; 
		break;
	case 105:
		cout << endl;
		cout << "VOCE ESCOLHEU: REFRIGERANTE " << endl;
		cout << "INFORME A QTD DESEJADA: " << endl;
		cin >> qtd;
		p=(1.00*qtd);
		cout << "COMPRA REALIZADA COM SUCESSO! " << endl; 
		break;
	default:
		system("cls");
		cout << endl; 
		cout << "VALOR INVALIDO" << endl; 
		cout << "VOLTANDO PARA O INICIO..." << endl;
		system ("pause");
		system ("cls");
		goto inicio;
		return 0;
		}	
	
	do{
	parcial+=p;
	cout << endl;
	cout << "DESEJA COMPRAR MAIS ALGUMA COISA? s/n" << endl;
	cin >> opc;
	if (opc == 's' or opc == 'S'){
		cout << "OK, RETORNANDO PARA O INICIO... " << endl;
		cout << "VALOR PARCIAL A PAGAR: " << parcial << " R$" << endl;
		cout << endl;
		system("Pause");
		system("cls");
		goto inicio;	
	}else if( opc == 'n' or opc == 'N'){
		cout << endl; 
		system("cls");
		cout << "SAINDO..." << endl;
		cout << "TOTAL A PAGAR: " << parcial << " R$" << endl;	
		cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS";
		return 0;
	}

}while(cod!=0);
		
	}	
	

