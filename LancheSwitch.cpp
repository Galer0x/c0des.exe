#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
char cdp;	

int opc;

double qtd, valor,din,troco;



	
cout << "\n";

cout << "SEJA BEM VINDO AO NOSSO LANCHE!\n";

cout << "\n";

cout << "DESEJA CONSULTAR NOSSO CARDAPIO? Responda com s/n \n";
cin >> cdp;

cout << "\n";

system("cls");

if(cdp=='s' or cdp=='S'){
	
	cout << "\n";
	
	cout << "OK, CARREGANDO CARDAPIO... \n";
	
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
	
	cout << "\n";
	
	cout << "VOCE DESEJA COMPRAR ALGUMA COISA? Responda com s/n \n";
	
	cin >> cdp; 
	
	cout << "\n";
	
	if(cdp=='s' or cdp=='S'){
		
	cout << "\n";
	
	cout << "OK, DIGITE O NUMERO DA OPCAO DESEJADA ABAIXO: \n";
	
	cin >> opc;
	
	system("cls");
	
	switch (opc)
	{
	
			case 1:
				
	
			cout << "VOCE ESCOLHEU: CACHORRO QUENTE" << endl;
			cout << "POR FAVOR, DIGITE A QUANTIDADE DESEJADA: " << endl; 
			cin >> qtd; 
			
			valor=(qtd*1.20);
			
			cout << "VALOR TOTAL: " << valor << " R$" << endl; 
			
			cout << "\n";
			
			cout << "VOCE DESEJA COMPRA ALGO A MAIS? Responda com s/n " << endl; 
			
			cin >> cdp;
			
			if (cdp=='s' or cdp=='S'){
				
				cout << "\n";
				
				system("cls");
				
				cout << "OK, VOLTANDO PARA O INICIO... \n";
				
				cout << "\n";
				
				system ("pause");
				
				system ("cls");
				
				goto inicio; 
				
			}else if(cdp=='n' or cdp=='N'){
				
				system ("cls");
				
				cout << "\n";
				
				dnv1:
				
				cout << "TUDO BEM, PAGUE O VALOR: " << valor << " R$ PARA FICARMOS KIT! " << endl; 
				
				cout << "\n";
				
				cout << "ENTRE COM A QUANTIDADE DE DINHEIRO ABAIXO: " << endl;
				cin >> din; 
				
				if(din>valor){
					
					cout << "\n";
					
					troco=(din-valor);
					
					cout << "OK, PAGAMENTO REALIZADO COM SUCESSO! \n";
					
					cout << "\n";
					
					cout << "SEU TROCO EH: " << troco << " R$" << endl; 
					
					cout << "\n";
					
					system ("pause");
					
					
				}else{
					
					system("cls");
					
					cout << "O VALOR: " << din << " R$ NAO CORRESPONDE AO MINIMO PAGAVEL DO PRODUTO ! \n";
					
					cout << "\n";
					
					cout << "POR FAVOR, DEVOLVA O PRODUTO OU PAGUE A QUANTIDADE CERTA !!! \n";
					
					cout << "\n";
					
					cout << "PARA PAGAR A QUANTIDADE CERTA RESPONDA COM S, OU PARA DESISTIR DA COMPRAR RESPONDA COM N \n";
					
					cin >> cdp;
					
					cout << "\n";
					
					if(cdp=='s' or cdp=='S'){
						
						system ("cls");
						
						goto dnv1;
						
						
					}else if(cdp=='n' or cdp=='N'){
						
						system ("cls");
						
						cout << "OBRIGADO POR RESPEITAR A POLITICA DO NOSSO LANCHE! " << endl;
						
						cout << "\n";
						
						system ("pause");
						
						system ("cls");
						
						goto dnv2;
						
					}
					
					
					
					
					
					
				}
				
				
				
				
				}
				
			break;	
					}
			
			
			switch (opc)
	{
	
			case 2:
				
	
			cout << "VOCE ESCOLHEU: BAURU SIMPLES" << endl;
			cout << "POR FAVOR, DIGITE A QUANTIDADE DESEJADA: " << endl; 
			cin >> qtd; 
			
			valor=(qtd*1.30);
			
			cout << "VALOR TOTAL: " << valor << " R$" << endl; 
			
			cout << "\n";
			
			cout << "VOCE DESEJA COMPRA ALGO A MAIS? Responda com s/n " << endl; 
			
			cin >> cdp;
			
				if (cdp=='s' or cdp=='S'){
				
				cout << "\n";
				
				system("cls");
				
				cout << "OK, VOLTANDO PARA O INICIO... \n";
				
				cout << "\n";
				
				system ("pause");
				
				system ("cls");
				
				goto inicio; 
				
				
}else if(cdp=='n' or cdp=='N'){
				
				system ("cls");
				
				cout << "\n";
				
				dnv0:
				
				cout << "TUDO BEM, PAGUE O VALOR: " << valor << " R$ PARA FICARMOS KIT! " << endl; 
				
				cout << "\n";
				
				cout << "ENTRE COM A QUANTIDADE DE DINHEIRO ABAIXO: " << endl;
				cin >> din; 
				
				if(din>valor){
					
					cout << "\n";
					
					troco=(din-valor);
					
					cout << "OK, PAGAMENTO REALIZADO COM SUCESSO! \n";
					
					cout << "\n";
					
					cout << "SEU TROCO EH: " << troco << " R$" << endl; 
					
					cout << "\n";
					
					system ("pause");
					
					
				}else{
					
					system("cls");
					
					cout << "O VALOR: " << din << " R$ NAO CORRESPONDE AO MINIMO PAGAVEL DO PRODUTO ! \n";
					
					cout << "\n";
					
					cout << "POR FAVOR, DEVOLVA O PRODUTO OU PAGUE A QUANTIDADE CERTA !!! \n";
					
					cout << "\n";
					
					cout << "PARA PAGAR A QUANTIDADE CERTA RESPONDA COM S, OU PARA DESISTIR DA COMPRAR RESPONDA COM N \n";
					
					cin >> cdp;
					
					cout << "\n";
					
					if(cdp=='s' or cdp=='S'){
						
						system ("cls");
						
						goto dnv0;
						
						
					}else if(cdp=='n' or cdp=='N'){
						
						system ("cls");
						
						cout << "OBRIGADO POR RESPEITAR A POLITICA DO NOSSO LANCHE! " << endl;
						
						cout << "\n";
						
						system ("pause");
						
						system ("cls");
						
						goto dnv2;
						
					}
					
					
					
					
					
					
				}
				
				
				
				
				}
				
			break;	
					}
					
			switch (opc)
	{
	
			case 3:
				
	
			cout << "VOCE ESCOLHEU: BAURU COM OVO" << endl;
			cout << "POR FAVOR, DIGITE A QUANTIDADE DESEJADA: " << endl; 
			cin >> qtd; 
			
			valor=(qtd*1.50);
			
			cout << "VALOR TOTAL: " << valor << " R$" << endl; 
			
			cout << "\n";
			
			cout << "VOCE DESEJA COMPRA ALGO A MAIS? Responda com s/n " << endl; 
			
			cin >> cdp;
			
				if (cdp=='s' or cdp=='S'){
				
				cout << "\n";
				
				system("cls");
				
				cout << "OK, VOLTANDO PARA O INICIO... \n";
				
				cout << "\n";
				
				system ("pause");
				
				system ("cls");
				
				goto inicio; 
				
				
			}else if(cdp=='n' or cdp=='N'){
				
				system ("cls");
				
				cout << "\n";
				
				dnv3:
				
				cout << "TUDO BEM, PAGUE O VALOR: " << valor << " R$ PARA FICARMOS KIT! " << endl; 
				
				cout << "\n";
				
				cout << "ENTRE COM A QUANTIDADE DE DINHEIRO ABAIXO: " << endl;
				cin >> din; 
				
				if(din>valor){
					
					cout << "\n";
					
					troco=(din-valor);
					
					cout << "OK, PAGAMENTO REALIZADO COM SUCESSO! \n";
					
					cout << "\n";
					
					cout << "SEU TROCO EH: " << troco << " R$" << endl; 
					
					cout << "\n";
					
					system ("pause");
					
					
				}else{
					
					system("cls");
					
					cout << "O VALOR: " << din << " R$ NAO CORRESPONDE AO MINIMO PAGAVEL DO PRODUTO ! \n";
					
					cout << "\n";
					
					cout << "POR FAVOR, DEVOLVA O PRODUTO OU PAGUE A QUANTIDADE CERTA !!! \n";
					
					cout << "\n";
					
					cout << "PARA PAGAR A QUANTIDADE CERTA RESPONDA COM S, OU PARA DESISTIR DA COMPRAR RESPONDA COM N \n";
					
					cin >> cdp;
					
					cout << "\n";
					
					if(cdp=='s' or cdp=='S'){
						
						system ("cls");
						
						goto dnv3;
						
						
					}else if(cdp=='n' or cdp=='N'){
						
						system ("cls");
						
						cout << "OBRIGADO POR RESPEITAR A POLITICA DO NOSSO LANCHE! " << endl;
						
						cout << "\n";
						
						system ("pause");
						
						system ("cls");
						
						goto dnv2;
						
					}
					
					
					
					
					
					
				}
				
				
				
				
				}
				
			break;	
					}
					
		
		
					
				switch (opc)
	{
	
			case 4:
				
	
			cout << "VOCE ESCOLHEU: HAMBURGUER" << endl;
			cout << "POR FAVOR, DIGITE A QUANTIDADE DESEJADA: " << endl; 
			cin >> qtd; 
			
			valor=(qtd*1.20);
			
			cout << "VALOR TOTAL: " << valor << " R$" << endl; 
			
			cout << "\n";
			
			cout << "VOCE DESEJA COMPRA ALGO A MAIS? Responda com s/n " << endl; 
			
			cin >> cdp;
			
				if (cdp=='s' or cdp=='S'){
				
				cout << "\n";
				
				system("cls");
				
				cout << "OK, VOLTANDO PARA O INICIO... \n";
				
				cout << "\n";
				
				system ("pause");
				
				system ("cls");
				
				goto inicio; 
				
				
			}else if(cdp=='n' or cdp=='N'){
				
				system ("cls");
				
				cout << "\n";
				
				dnv4:
				
				cout << "TUDO BEM, PAGUE O VALOR: " << valor << " R$ PARA FICARMOS KIT! " << endl; 
				
				cout << "\n";
				
				cout << "ENTRE COM A QUANTIDADE DE DINHEIRO ABAIXO: " << endl;
				cin >> din; 
				
				if(din>valor){
					
					cout << "\n";
					
					troco=(din-valor);
					
					cout << "OK, PAGAMENTO REALIZADO COM SUCESSO! \n";
					
					cout << "\n";
					
					cout << "SEU TROCO EH: " << troco << " R$" << endl; 
					
					cout << "\n";
					
					system ("pause");
					
					
				}else{
					
					system("cls");
					
					cout << "O VALOR: " << din << " R$ NAO CORRESPONDE AO MINIMO PAGAVEL DO PRODUTO ! \n";
					
					cout << "\n";
					
					cout << "POR FAVOR, DEVOLVA O PRODUTO OU PAGUE A QUANTIDADE CERTA !!! \n";
					
					cout << "\n";
					
					cout << "PARA PAGAR A QUANTIDADE CERTA RESPONDA COM S, OU PARA DESISTIR DA COMPRAR RESPONDA COM N \n";
					
					cin >> cdp;
					
					cout << "\n";
					
					if(cdp=='s' or cdp=='S'){
						
						system ("cls");
						
						goto dnv4;
						
						
					}else if(cdp=='n' or cdp=='N'){
						
						system ("cls");
						
						cout << "OBRIGADO POR RESPEITAR A POLITICA DO NOSSO LANCHE! " << endl;
						
						cout << "\n";
						
						system ("pause");
						
						system ("cls");
						
						goto dnv2;
						
					}
					
					
					
					
					
					
				}
				
				
				
				
				}
				
			break;	
					}		
					
					
		switch (opc)
	{
	
			case 5:
				
	
			cout << "VOCE ESCOLHEU: CHEESEBURGUER " << endl;
			cout << "POR FAVOR, DIGITE A QUANTIDADE DESEJADA: " << endl; 
			cin >> qtd; 
			
			valor=(qtd*1.30);
			
			cout << "VALOR TOTAL: " << valor << " R$" << endl; 
			
			cout << "\n";
			
			cout << "VOCE DESEJA COMPRA ALGO A MAIS? Responda com s/n " << endl; 
			
			cin >> cdp;
			
				if (cdp=='s' or cdp=='S'){
				
				cout << "\n";
				
				system("cls");
				
				cout << "OK, VOLTANDO PARA O INICIO... \n";
				
				cout << "\n";
				
				system ("pause");
				
				system ("cls");
				
				goto inicio; 
				
				
			}else if(cdp=='n' or cdp=='N'){
				
				system ("cls");
				
				cout << "\n";
				
				dnv5:
				
				cout << "TUDO BEM, PAGUE O VALOR: " << valor << " R$ PARA FICARMOS KIT! " << endl; 
				
				cout << "\n";
				
				cout << "ENTRE COM A QUANTIDADE DE DINHEIRO ABAIXO: " << endl;
				cin >> din; 
				
				if(din>valor){
					
					cout << "\n";
					
					troco=(din-valor);
					
					cout << "OK, PAGAMENTO REALIZADO COM SUCESSO! \n";
					
					cout << "\n";
					
					cout << "SEU TROCO EH: " << troco << " R$" << endl; 
					
					cout << "\n";
					
					system ("pause");
					
					
				}else{
					
					system("cls");
					
					cout << "O VALOR: " << din << " R$ NAO CORRESPONDE AO MINIMO PAGAVEL DO PRODUTO ! \n";
					
					cout << "\n";
					
					cout << "POR FAVOR, DEVOLVA O PRODUTO OU PAGUE A QUANTIDADE CERTA !!! \n";
					
					cout << "\n";
					
					cout << "PARA PAGAR A QUANTIDADE CERTA RESPONDA COM S, OU PARA DESISTIR DA COMPRAR RESPONDA COM N \n";
					
					cin >> cdp;
					
					cout << "\n";
					
					if(cdp=='s' or cdp=='S'){
						
						system ("cls");
						
						goto dnv5;
						
						
					}else if(cdp=='n' or cdp=='N'){
						
						system ("cls");
						
						cout << "OBRIGADO POR RESPEITAR A POLITICA DO NOSSO LANCHE! " << endl;
						
						cout << "\n";
						
						system ("pause");
						
						system ("cls");
						
						goto dnv2;
						
					}
					
					
					
					
					
					
				}
				
				
				
				
				}
				
			break;	
					}		
					
		
		switch (opc)
	{
	
			case 6:
				
	
			cout << "VOCE ESCOLHEU: REFRIGERANTE" << endl;
			cout << "POR FAVOR, DIGITE A QUANTIDADE DESEJADA: " << endl; 
			cin >> qtd; 
			
			valor=(qtd*1.00);
			
			cout << "VALOR TOTAL: " << valor << " R$" << endl; 
			
			cout << "\n";
			
			cout << "VOCE DESEJA COMPRA ALGO A MAIS? Responda com s/n " << endl; 
			
			cin >> cdp;
			
				if (cdp=='s' or cdp=='S'){
				
				cout << "\n";
				
				system("cls");
				
				cout << "OK, VOLTANDO PARA O INICIO... \n";
				
				cout << "\n";
				
				system ("pause");
				
				system ("cls");
				
				goto inicio; 
				
				
			}else if(cdp=='n' or cdp=='N'){
				
				system ("cls");
				
				cout << "\n";
				
				dnv6:
				
				cout << "TUDO BEM, PAGUE O VALOR: " << valor << " R$ PARA FICARMOS KIT! " << endl; 
				
				cout << "\n";
				
				cout << "ENTRE COM A QUANTIDADE DE DINHEIRO ABAIXO: " << endl;
				cin >> din; 
				
				if(din>valor){
					
					cout << "\n";
					
					troco=(din-valor);
					
					cout << "OK, PAGAMENTO REALIZADO COM SUCESSO! \n";
					
					cout << "\n";
					
					cout << "SEU TROCO EH: " << troco << " R$" << endl; 
					
					cout << "\n";
					
					system ("pause");
					
					
				}else{
					
					system("cls");
					
					cout << "O VALOR: " << din << " R$ NAO CORRESPONDE AO MINIMO PAGAVEL DO PRODUTO ! \n";
					
					cout << "\n";
					
					cout << "POR FAVOR, DEVOLVA O PRODUTO OU PAGUE A QUANTIDADE CERTA !!! \n";
					
					cout << "\n";
					
					cout << "PARA PAGAR A QUANTIDADE CERTA RESPONDA COM S, OU PARA DESISTIR DA COMPRAR RESPONDA COM N \n";
					
					cin >> cdp;
					
					cout << "\n";
					
					if(cdp=='s' or cdp=='S'){
						
						system ("cls");
						
						goto dnv6;
						
						
					}else if(cdp=='n' or cdp=='N'){
						
						system ("cls");
						
						cout << "OBRIGADO POR RESPEITAR A POLITICA DO NOSSO LANCHE! " << endl;
						
						cout << "\n";
						
						system ("pause");
						
						system ("cls");
						
						goto dnv2;
						
					}
					
					
					
					
					
					
				}
				
				
				
				
				}
				
			break;	
					}		
		
		
		
					
					
					
					
					
			
}
			
			
			
			
			
	
				
	
}if(cdp=='n' or cdp=='N'){
	
	dnv2:
	
	system ("cls");
	
	cout << "\n";
	
	cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS! \n";
	
	cout << "\n";
	
	cout << "CELESTINO DEV 2019 ® \n";
	
	cout << "\n";
	
	system("pause");
	
}
	
}
