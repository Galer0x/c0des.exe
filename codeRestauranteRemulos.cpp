#include <iostream>
#include <stdlib.h>

using namespace std;


void compras(char n){
	
	cout << "porra"; 
	
	if (n == 's' or n == 'S'){
		
	cout << "SEJA BEM VINDO A CENTRAL DE COMPRAS DO REMULOS" << endl;
	
	cout << endl;
	
	cout << "DIGITE 1 PARA COMPRAR ALGO DO CARDAPIO OU 0 PARA FINALIZAR" << endl; 
	
		
		
	}else if( n == 'n' or n == 'N'){
		system("cls");
		cout << "OBRIGADO POR UTILIZAR NOSSOS SERVIÇOS" << endl;
	}
	
	
	
}





void acao (int opc){

char *p;
char d1,d2; 

p=&d2; 


if (opc==1){

system("cls"); 

cout << "R E S T A U R A N T E 	" << " 	R E M U L O S		" << endl;

cout << endl;

cout << "SEJA BEM VINDO A PAGINA DE CADASTRO " << endl;
cout << "-	BENEFICIOS DE CADASTRO NA CASA: " << endl;
cout << "" << endl; 
cout << "-	30% DE DESCONTO AOS FINS DE SEMANA EM TODOS OS ALIMENTOS " << endl;
cout << "-	EMISSAO	DE CARTAO	DE CREDITO GRATIS COM PARCELAMENTO MAX DE 3X S/ JUROS " << endl;
cout << "-	DESCONTOS COM ACOMPANHANTES DE LUXOS EM TODA A REDE REMULOS" << endl;
cout << "" << endl; 
cout << "DESEJA SE CADASTRAR?" << endl;
cin >> d1;

	
}


if (opc==2){
	
system("cls"); 	
cout << "R E S T A U R A N T E 	" << " 	R E M U L O S		" << endl;
cout << endl;

cout << "CARDAPIO" << endl; 
cout << "" << endl;
cout << "TIPO	" << " NOME		" << " PRECO 	" << " CODIGO	" << endl; 
cout << "BEBIDA	" << " COCA-COLA	" << " 3.00R$	" << " 07	" << endl; 
cout << "COMIDA	" << " X-SALADA	" << " 7.00R$" << " 02	" << endl;
cout << "COMIDA " << " PRATO FEITO	" << " 12.00R$	" << " 05	" << endl;
cout << "SOBREMESA " << " SORVETE	" << " 5.00R$ 	" << " 06	" << endl; 

cout << "" << endl;


cout << "voltando para o menu principal... " << endl; 
system("pause");
system("cls");


	
}

	
	
}




int main(){
	
 
	int opc;
	char d1; 

	
	cout << "R E S T A U R A N T E 	" << " 	R E M U L O S		" << endl;
	cout << endl; 
	cout << "SEJA BEM VINDO ! " << endl;
	
	cout << "(1) - CADASTRAR-SE " << endl;
	cout << "(2) - VER CARDAPIO " << endl; 
	
	cout <<"system: ";
	cin >> opc;
	
	acao(opc);
	
	cout << "DESEJA REALIZAR ALGUMA COMPRA? s/n " << endl;
	cin >> d1; 

	
	 
	
	system ("cls");
	 
	
	
	cout << "" << endl; 
	cout << "" << endl; 
	cout << "" << endl; 
	cout << "REMULOS CIA 2019 ®";
	return 0;
}
