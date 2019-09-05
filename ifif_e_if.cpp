#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
	int n1,n2;
	double soma; 
	char opc,opc1,opc2;
	
	putaria:
	
	cout << "\n";
	
	cout << "SEJA BEM VINDO \n";
	cout << "\n";
	
	cout << "POR FAVOR DIGITE UM NUMERO ABAIXO: \n";
	cin >> n1;
	
	cout << "\n";
	
	cout << "AGORA DIGITE OUTRO NUMERO ABAIXO: \n";
	cin >> n2;
	
	cout << "\n";
	
	cout << "PROCESSANDO...			" << endl;
	
	cout << "\n";
	
	cout << "OK, VOCE DESEJA REALIZAR A SOMA DESTES NUMEROS? responda com s/n: \n";
	cout << "OBS: DIGITE AS LETRAS EM MINUSCULO! \n";
	
	
	cin >> opc; 
	
	if (opc=='s'){
		
		system("cls");
		
		soma=(n1+n2);
		
		cout << "OK, AGUARDE! \n";
		
		cout << "\n";
		
		cout << "PROCESSANDO...				\n";
		
		cout << "\n";
		
		system("pause");
		system("cls");
		
		cout << "A SOMA DO NUMERO " << n1 << " E A SOMA DO NUMERO " << n2 << " EH: " << soma << endl; 
		
		cout << "\n\n";
		
		cout << "VOCE DESEJA COLOCAR NOVOS NUMEROS? responda com s/n" << endl; 
		
		cin >> opc1;
	
			if(opc1=='s'){
				
				cout << "\n";
				
				cout << "LIMPANDO TELA...\n";
				
				
				system("pause");
				system("cls");
				
				cout << "\n";
				
				cout << "REINICIANDO O PROGRAMA...\n";
				
				cout << "\n";
				
				system("pause");
				system("cls");
				
				goto putaria; 
				
				
			}else if(opc1=='n'){
				
				system("cls");
				
				cout << "\n";
				
				cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS, VOLTE SEMPRE !!\n";
				
				cout << "\n";
				
				system("pause");
				
			}
	
	
}	else if (opc=='n'){
	
	
		system("cls");
		
		cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS, VOLTE SEMPRE! \n\n";
		
		system("pause");
	

}

			
		
	
	
}
