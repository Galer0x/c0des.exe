#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
// MARCOS ANDRE MARQUES CELESTINO - Encarregado pelas gambiarras // 
// CODIGO EM 65%, FALTA CRIAR UM PONTEIRO PARA CHAMAR OS VALORES DENTRO DO STRUCT fichaDoCliente, PARA MOSTRAR NOME,IDADE e CPF do mesmo. 
// FUNÇAO DE COMPRAS DO RESTAURANTE // 

void compras(char n){
	char cod;
	char code; 
	float compras,total,uni; 
	char resp; 
	
	cout << endl; 	
	cout << "SEJA BEM VINDO A CENTRAL DE COMPRAS DO REMULOS" << endl;
	inicio: 
	cout << endl;
	cout << "CARDAPIO" << endl; 
	cout << "" << endl;
	cout << "TIPO	" << " NOME		" << " PRECO 	" << "	CODIGO	" << endl; 
	cout << "BEBIDA	" << " COCA-COLA	" << " 3.00R$" << "		7" << endl; 
	cout << "COMIDA	" << " X-SALADA	" << " 7.00R$" << "		2" << endl;
	cout << "COMIDA " << "  PRATO FEITO	" << " 12.00R$	" << "5" << endl;
	cout << "SOBREMESA " << "SORVETE	" << " 5.00R$ 	" << "6" << endl; 
	
	cout << endl; 
	cout << "DIGITE O CODIGO DO PRODUTO QUE VOCE DESEJA COMPRAR: " << endl; 
	volta:
	cod = getchar(); 
	
	// SWITCH PARA AS COMPRAS DO CLIENTE // 
	switch (cod){
		case '7': 
		cout << endl; 
		cout << "VOCE ESCOLHEU: COCA COLA" << endl;
		cout << "UNIDADES: " << endl;
		cin >> uni; 
		compras = (3*uni); 
		cout << "COMPRA REALIZADA COM SUCESSO!" << endl; 
		break; 
		
		case '2':
		cout << endl; 
		cout << "VOCE ESCOLHEU: X-SALADA" << endl;
		cout << "UNIDADES: " << endl;
		cin >> uni; 
		compras = (7*uni); 
		cout << "COMPRA REALIZADA COM SUCESSO!" << endl; 
		break;
		
		case '5':
		cout << endl; 
		cout << "VOCE ESCOLHEU: PRATO FEITO" << endl;
		cout << "UNIDADES: " << endl;
		cin >> uni; 
		compras = (12*uni); 
		cout << "COMPRA REALIZADA COM SUCESSO!" << endl; 
		break;
		
		case '6':
		cout << endl; 
		cout << "VOCE ESCOLHEU: SORVETE" << endl;
		cout << "UNIDADES: " << endl;
		cin >> uni; 
		compras = (5*uni); 
		cout << "COMPRA REALIZADA COM SUCESSO!" << endl; 
		break;
		
		default:
		goto volta; 
		break;				
}
	// CONDIÇAO PARA REALIZAR OUTRA COMPRA E FAZER O SOMATORIO // 
	cout << endl; 
	cout << "DESEJA COMPRAR MAIS ALGUMA COISA? 1 para sim; 0 para nao  " << endl;
	resolve: 
	cin >> resp; 
	total+=compras; 
	
	switch (resp){
		case '1':
		system("cls"); 
		goto inicio; 
		break;
		case '0':
		system("cls");
		cout << "OK, VOCE DEVE PAGAR: " << total << " R$" << endl; 
		cout << endl;
		cout << "AGRADECEMOS A PREFERENCIA, VOLTE SEMPRE!" << endl; 
		return; 
		break;	
		default: 
		goto resolve; 
		break;
}
}

// STRUCT PARA ARMAZENAMENTO DE DADOS DO CLIENTE // 
struct fichaDoCliente{
	char nome[40]; 
	int idade;
	string  cpf; 
};

// FUNÇAO OBRIGATORIA PARA A UTILIZAÇAO DO PROGRAMA: 
void acao (char opc){

char d1;

system("cls"); 
cout << "R E S T A U R A N T E 	" << " 	R E M U L O S		" << endl;
cout << endl;

cout << "	BENEFICIOS DE CADASTRO NA CASA: " << endl;
cout << "" << endl; 
cout << "-	30% DE DESCONTO AOS FINS DE SEMANA EM TODOS OS ALIMENTOS " << endl;
cout << "-	EMISSAO	DE CARTAO DE CREDITO GRATIS COM PARCELAMENTO MAX DE 3X S/ JUROS " << endl;
cout << "-	DESCONTOS COM ACOMPANHANTES DE LUXOS EM TODA A REDE REMULOS" << endl;
cout << "" << endl; 
cout << endl; 
cout << "DESEJA SE CADASTRAR? s/n" << endl;
correta: 
cin >> d1;

fichaDoCliente cliente; 

// PONTO DE CADASTRO DO CLIENTE //
if (d1 == 's' or d1 == 'S'){
	system("cls");
	cout << "			PAGINA DE CADASTRO" << endl; 
	cout << endl;
	cout << "POR FAVOR, DIGITE SEU NOME: " << endl;
	fflush(stdin); 
	fgets(cliente.nome,40,stdin);
	cout << "DIGITE SUA IDADE: ";
	cin >> cliente.idade;
	cout << "DIGITE SEU CPF: " << endl;
	cin >> cliente.cpf;
	
	system("cls"); 
	cout << endl; 
	cout << "CLIENTE: "<< cliente.nome << endl; 
	cout << "IDADE: "<< cliente.idade << endl;
	cout << "CPF:"	<< cliente.cpf	<< endl; 
	
}else if(d1 =='n' or d1 == 'N'){
	cout << endl; 
	cout << "OK, RESPEITAMOS SUA ESCOLHA!" << endl;
	cout << "VOLTANDO PARA A PAGINA INICIAL..." << endl;
	system("pause"); 
	system ("cls");		
}else{
	goto correta; 
}

}

// FUNÇAO PRINCIPAL DO PROGRAMA RESTAURANTE REMULOS // 
int main(){
	char opc;
	char comp; 

	cout << "R E S T A U R A N T E 	" << " 	R E M U L O S		" << endl;
	cout << endl; 
	cout << "SEJA BEM VINDO ! " << endl;
	
	cout << "DIGITE 1 PARA CONTINUAR:" << endl;
	cout <<"system: ";
	do{
	cin >> opc;
	}while(opc!='1'); 
	
	acao(opc); 
	
	cout << endl; 
	cout << "R E S T A U R A N T E 	" << " 	R E M U L O S		" << endl;
	cout << endl; 
	cout << "DESEJA REALIZAR ALGUMA COMPRA? s/n " << endl;
	corrige: 
	cin >> comp; 
	
	switch (comp){
		case 's': 
		compras(comp);
		break;
		case 'n':
		system("cls");
		cout << "AGRADECEMOS SUA VISITA, VOLTE SEMPRE!" << endl; 
		cout << "" << endl; 
		cout << "REMULOS CIA 2019 ®";
		return 0;
		break;
		default:
		goto corrige;
		break; 	
	}

}
