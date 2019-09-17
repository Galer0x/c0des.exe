
/*

DUPLA LADO DIREITO: RENAN GUIMARAES 

Nome: Marcos André Marques Celestino 

Matricula: 19184301

Nome: Efraim Ribeiro Correa

Matricula: 19202393

Curso: Ciência da Computação - CIN02S1

UniNorte Laureate

DUPLA LADO ESQUERDO: Caio Amaro / Anderson 

*/

#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
	int num; 
	float preco1,preco2,preco3, qtd, parcial;
	char opc; 
	
	cout << "SEJA BEM VINDO " << endl;
	cout << "CARDAPIO	" << endl;
	cout << "\n";
	
	inicio:
	
	cout << "ESPECIFICACAO		CODIGO		PRECO	" << endl ; 
	cout << "\n";
	
	cout << "PRATO COMPLETO		3		15,00R$ \n";
	cout << "PRATO SIMPLES 		5		9,00R$ \n";
	cout << "BEBIDA			1		5,00R$ \n";
	cout << "SAIR			0\n";
	
	cout << "\n"; 
	cout << "DIGITE O CODIGO DO PRODUTO QUE VOCE DESEJA: " << endl; 
	cin >> num; 
	
	switch (num)
	{
		case 3:	
		cout << "VOCE ESCOLHEU: PRATO COMPLETO " << endl; 
		cout << "\n";
		cout << "DIGITE A QUANTIDADE DESEJADA: " << endl;
		cin >> qtd;
		preco1=(qtd*15);
		cout << " VOCE ESCOLHEU " << qtd << " UNIDADES DO PRATO COMPLETO! " << endl;
		cout << "VALOR: " << preco1 << "R$"; 
		break;		
	}
	
	switch (num)
	{
		case 5:	
		cout << "VOCE ESCOLHEU: PRATO SIMPLES " << endl; 
		cout << "\n";
		cout << "DIGITE A QUANTIDADE DESEJADA: " << endl;
		cin >> qtd;
		preco2=(qtd*9);
		cout << " VOCE ESCOLHEU " << qtd << " UNIDADES DO PRATO SIMPLES! " << endl;
		cout << "VALOR: " << preco2 << "R$"; 
		break;		
	}
	switch (num)
	{
		case 1:	
		cout << "VOCE ESCOLHEU: BEBIBA " << endl; 
		cout << "\n";
		cout << "DIGITE A QUANTIDADE DESEJADA: " << endl;
		cin >> qtd;
		preco3=(qtd*5);
		cout << " VOCE ESCOLHEU " << qtd << " UNIDADES DO PRATO SIMPLES! " << endl;
		cout << "VALOR: " << preco3 << "R$"; 
		break;		
	}
	switch (num)
	{
		case 0:
			
		system("cls");
		cout << "OK, FINALIZANDO O PROGRAMA " << endl;
		cout << "CASO TENHA FEITO ALGUMA COMPRA, O VALOR A PAGAR EH: " << parcial << "R$" << endl;
		cout << "CASO CONTRARIO, APENAS IGNORE..." << endl ;
		break;
	}
		
	parcial=(preco1+preco2+preco3);

	cout << "\n"; 
	cout << "DESEJA COMPRAR MAIS ALGUMA COISA? OU TENTAR NOVAMENTE? Responda com S/N \n";
	cin >> opc;
	
	if (opc=='s' or opc=='S'){
		cout << "OK, VOLTANDO PARA A TELA INICIAL... " << endl; 
		cout << "\n";
		cout << "SEU VALOR PARCIAL EH: " << parcial << "R$" <<  endl; 
		cout << "\n";
		system("pause"); 
		system ("cls");
		goto inicio; 
}
	if (opc=='n' or opc=='N'){
		
	system("cls");	
		
	cout << "OK, O SEU VALOR TOTAL/FINAL A PAGAR EH: " << parcial << " R$" << endl;
	
	cout << "CASO NAO TENHA COMPRADO NADA, IGNORE O NUMERO ALEATORIO!" << endl; 
	
	cout << "!!! AGRADECEMOS SUA PREFERENCIA !!!" << endl; 
		
	system ("pause");

	system("cls");
	
	cout << "OBRIGADO POR UTILIZAR NOSSO APLICATIVO!" << endl;
	cout << "\n";
	cout << "MARCOS ANDRE / EFRAIM RIBEIRO " << endl;
	cout << "TODOS OS CREDITOS RESERVADOS" << endl; 

}
		

	




}

	
	
	
	

