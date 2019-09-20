#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int num,qtd; 
	float parcial;
	char opc; 
	
	do{
	cout << "-----------SEJA BEM VINDO-------------"<< endl;
	cout << "*********** CARDAPIO *****************"<< endl;
	cout << "ESPECIFICACAO  *  CODIGO  *   PRECO   "<< endl;
	cout << "PRATO COMPLETO *   (3)    * R$ 15,00  "<< endl;
	cout << "PRATO SIMPLES  *   (5)    * R$ 9,00   "<< endl;
	cout << "BEBIDA         *   (1)    * R$ 5,00   "<< endl;
	cout << endl;
	cout << "SAIR (0)                              "<< endl; //PORQUE TU COLOCOU ESSA PORRA DE SAIR AQUI NO MENU? 
	cout << endl;
	
	cout << "DIGITE O CODIGO DO PRODUTO QUE VOCE DESEJA OU (0) PARA SAIR: "; //TIVE QUE INDICAR PRO USER QUE SE ELE DIGITAR 0 ELE SAI DO PROGRAMA
	cin >> num;
	
	cout << endl;
	
	if(num != 0){ // ISSO IMPEDE DE QUE QUANDO OPCAO FOR 0  PEÇA QUANTIDADE
		cout << "DIGITE A QUANTIDADE DESEJADA: ";
		cin >> qtd;
		cout << endl;
	}
	
	switch(num){ //PROCESSAMENTO INTERNO DE CADA OPÇÃO
		case 3:
			
			cout << "PRATO COMPLETO (3) R$ 15,00  ||  ""("<< qtd <<") Unidades" << endl;
			cout << "COMPRADO COM SUCESSO!" << endl;
			cout << endl;
			parcial += (qtd * 15);
			break;
		case 5:
			cout << "PRATO SIMPLES (5) R$ 9,00  ||  ""("<< qtd <<") Unidades  " << endl;
			cout << "COMPRADO COM SUCESSO!" << endl;
			cout << endl;
			parcial += (qtd * 9);
			break;
		case 1:
			cout << "BEBIDA (1) R$ 5,00  ||  ""("<< qtd <<") Unidades  " << endl;
			cout << "COMPRADO COM SUCESSO!" << endl;
			cout << endl;
			parcial += (qtd * 5);
			break;
		case 0:
			if (num == 0){//ESTRUTURA QUE SAI DO PROGRAMA NO MENU
			    system("cls");
				cout << "!!! AGRADECEMOS SUA PREFERENCIA !!!" << endl; 
				cout << endl;
				cout << "OBRIGADO POR UTILIZAR NOSSO APLICATIVO!" << endl;
				cout << endl;
				cout << "MARCOS ANDRE / EFRAIM RIBEIRO " << endl;
				cout << endl;
				cout << "TODOS OS CREDITOS RESERVADOS" << endl; 
				cout << endl;
				cout << "|C|A|I|O| REMAKE" << endl;
				return 0;
			}
			break;
		default:
			cout << "OPCAO INCORRETA" << endl;
	}
	
	//SAIDA DA CONTA PARCIAL
	cout << "CONTA PARCIAL: R$ " << parcial << endl;
	cout << endl;
	
	//PEDIDO PRA SAIR
	cout << "CONTINUAR COMPRANDO (N)" << endl;
	cout << "VOCE DESEJA SAIR? (S)" << endl;
	cout << "EU SELECIONO A OPCAO: ";
	cin >> opc;
	
	if(opc == 'n' || opc == 'N'){ //LIMPAR TELA SE CONTINUAR A COMPRANDO
		system("cls");
		cout << "CONTA PARCIAL: R$ " << parcial << endl;
		cout << endl;
	}
	
	}while(opc == 'n' || opc== 'N');// CODIÇÃO DE SAIDA
	
	system("cls");
	
	//MOSTRANDO O VALOR FINAL A SER PAGO
	if(parcial == 0){ // EVITA  VALOR 0 PARA PAGAR
		cout << "VOCE NAO COMPROU NADA" << endl;
	}else{
		cout << "OK, O SEU VALOR TOTAL/FINAL A PAGAR EH: " << parcial << " R$" << endl;
	}
	
	cout << "!!! AGRADECEMOS SUA PREFERENCIA !!!" << endl; 
	cout << endl;
	cout << "OBRIGADO POR UTILIZAR NOSSO APLICATIVO!" << endl;
	cout << endl;
	cout << "MARCOS ANDRE / EFRAIM RIBEIRO " << endl;
	cout << endl;
	cout << "TODOS OS CREDITOS RESERVADOS" << endl; 
	cout << endl;
	cout << "|C|A|I|O| REMAKE" << endl;
	
	system("pause");
	return 0;		
 }
	
	
	
	
	
	
		
	
		
		
	
	



