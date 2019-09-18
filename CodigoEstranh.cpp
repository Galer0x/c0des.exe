#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int cdd,uni;
	char resp; 
	float parcial,t1,t2,t3,t4,t5,t6;
	
	cout << "SEJA BEM VINDO" << endl;

	menu:
	cout << "		CARDAPIO DO LANCHE			\n";
	cout << "\n";
	cout << "ESPECIFICACAO		CODIGO		PRECO \n";
	cout << "1- CACHORRO QUENTE	100		1.20R$\n";
	cout << "2- BAURU SIMPLES	101		1.30R$\n";
	cout << "3- BAURU COM OVO 	102		1.50R$\n";
	cout << "4- HAMBURGUER		103		1.20R$\n";
	cout << "5- CHEESEBURGUER	104		1.30R$\n";
	cout << "6- REFRIGERANTE		105		1.00R$\n";


	cout << "DIGITE O CODIGO DO SEU PRODUTO OU DIGITE 0 PARA SAIR " << endl;
	
	cin >> cdd; 
	
		switch (cdd)
		{
		case 100:
		cout << "VOCE ESCOLHEU: CACHORRO QUENTE" << endl;
		cout << "DESEJA QUANTAS UNIDADES?" << endl; 
		cin >> uni;	
		t1=(uni*1.20);
		cout << "\n";
		break;
		
		case 101:
		cout << "VOCE ESCOLHEU: BAURU SIMPLES" << endl;
		cout << "DESEJA QUANTAS UNIDADES?" << endl; 
		cin >> uni;	
		t2=(uni*1.30);
		cout << "\n";
		break;
		
		case 102:
		cout << "VOCE ESCOLHEU: BAURU COM OVO" << endl;
		cout << "DESEJA QUANTAS UNIDADES?" << endl; 
		cin >> uni;	
		t3=(uni*1.50);
		cout << "\n";
		break;
		
		case 103:
		cout << "VOCE ESCOLHEU: HAMBURGUER" << endl;
		cout << "DESEJA QUANTAS UNIDADES?" << endl; 
		cin >> uni;	
		t4=(uni*1.20);
		cout << "\n";
		break;
		
		case 104:
		cout << "VOCE ESCOLHEU: CHESSEBURGUER" << endl;
		cout << "DESEJA QUANTAS UNIDADES?" << endl; 
		cin >> uni;	
		t5=(uni*1.30);
		cout << "\n";
		break;
		
		case 105:
		cout << "VOCE ESCOLHEU: REFRIGERANTE" << endl;
		cout << "DESEJA QUANTAS UNIDADES?" << endl; 
		cin >> uni;	
		t6=(uni*1.00);
		cout << "\n";
		break;
		
		default:	
		cout << "VALOR INVALIDO";
		break;
		}
		
		if(cdd!=0){
		parcial=(t1+t2+t3+t4+t5+t6);
		cout << "COMPRA REALIZADA COM SUCESSO! Deseja comprar mais alguma coisa? resp com s/n" << endl;
		cin >> resp;
		if(resp=='s' or resp=='S'){
			system("cls");
			cout << "OK, VOLTANDO AO MENU PRINCIPAL" << endl;
			cout << "Valor Parcial: "<< parcial;
			cout << "\n";
			system("pause");
			system("cls");
			goto menu;
		}else if(resp=='n' or resp=='N'){
			system("cls");
			cout << "OK, O SEU TOTAL A PAGAR EH: " << parcial << endl; 
}

}
		
		
	}
	
	
	
	
	
		
	
		
		
	
	



