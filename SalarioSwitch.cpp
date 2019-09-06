#include <iostream>
#include <stdlib.h>


using namespace std;

int main (){
	
	float salario;
	int opc; 
	double niw;
	string nome;
	char coe;
	
	foda:
	
	
	cout << "SEJA BEM VINDO AO NOSSO SISTEMA! \n";
	
	cout << "POR FAVOR, DIGITE SEU NOME ABAIXO: \n";
	
	cin >> nome;
	
	cout << "\n";
	
	cout << "OK, DIGITE O VALOR DO SEU ULTIMO SALARIO RECEBIDO: \n";
	
	cin >> salario;
	
	cout << "\n";
	
	cout << "PLANOS DE TRABALHO\n";
	
	cout << "PLANO		AUMENTO \n";
	
	cout << "\n";
		
	cout << "1- A		10%\n";
	cout << "2- B		15%\n";
	cout << "3- C		20%\n";
	
	cout << "\n";
	
	cout << "DIGITE ABAIXO A OPCAO DO SEU PLANO DE TRABALHO: \n";
	
	
	cin >> opc;
	
	cout << "\n";
	
	system("pause");
	
	system ("cls");
	
	
	switch (opc)
	
	case 1: 
	
	{
	
	
		cout << "VOCE ESCOLHEU O PLANO: A \n";
		
		cout << "NOSSO SISTEMA IRA CALCULAR SEU REAJUSTE\n";
		
		cout << "\n";
		
		cout << "AGUARDE...\n";
		
		cout << "\n";
		
		system("pause");
		
		niw=((salario*0.10)+salario);
		
		cout << "\n";
		
		system ("cls");
		
		cout << nome << " SEU NOVO SALARIO EH: " << niw << endl;
		
		cout << "\n";
		
		cout << "DESEJA REFAZER O CALCULO NOVAMENTE? Responda com s/n \n";
		
		cout << "\n";
		
		cout << "OBS: DIGITE COM LETRA MINUSCULA!: \n";
		
		cin >> coe; 
		
		if (coe=='s'){
			
			cout << "\n";
			
			system ("cls");
			
			cout << "REINICIANDO O SISTEMA... \n";
			
			system("pause");
			
			system("cls");
			
			goto foda;
			
			cout << "\n";
			
		}else if(coe=='n'){
			
			cout << "\n";
			
			system ("cls");
			
			cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS! \n";
			
			cout << "\n\n";
			
			cout << "CELESTINO DEV - 2019 ® \n"; 
			
			cout << "\n";
			
			system ("pause");
		
}
		
	break;
}

		switch (opc)
		case 2: 
{
	
		cout << "VOCE ESCOLHEU O PLANO: B \n";
		
		cout << "NOSSO SISTEMA IRA CALCULAR SEU REAJUSTE\n";
		
		cout << "\n";
		
		cout << "AGUARDE...\n";
		
		cout << "\n";
		
		system("pause");
		
		niw=((salario*0.15)+salario);
		
		cout << "\n";
		
		system ("cls");
		
		cout << nome << " SEU NOVO SALARIO EH: " << niw << endl;
		
		cout << "\n";
		
			cout << "DESEJA REFAZER O CALCULO NOVAMENTE? Responda com s/n \n";
		
		cout << "\n";
		
		cout << "OBS: DIGITE COM LETRA MINUSCULA!: \n";
		
		cin >> coe; 
		
		if (coe=='s'){
			
			cout << "\n";
			
			system ("cls");
			
			cout << "REINICIANDO O SISTEMA... \n";
			
			system("pause");
			
			system("cls");
			
			goto foda;
			
			cout << "\n";
			
		}else if(coe=='n'){
			
			cout << "\n";
			
			system ("cls");
			
			cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS! \n";
			
			cout << "\n\n";
			
			cout << "CELESTINO DEV - 2019 ® \n"; 
			
			cout << "\n";
			
			system ("pause");
		
}
		
		
		break;
		
}
		switch (opc)
		case 3: 
{

		cout << "VOCE ESCOLHEU O PLANO: C \n";
		
		cout << "NOSSO SISTEMA IRA CALCULAR SEU REAJUSTE\n";
		
		cout << "\n";
		
		cout << "AGUARDE...\n";
		
		cout << "\n";
		
		system("pause");
		
		niw=((salario*0.20)+salario);
		
		cout << "\n";
		
		system ("cls");
		
		cout << nome << " SEU NOVO SALARIO EH: " << niw << endl;
		
		cout << "\n";
		
			cout << "DESEJA REFAZER O CALCULO NOVAMENTE? Responda com s/n \n";
		
		cout << "\n";
		
		cout << "OBS: DIGITE COM LETRA MINUSCULA!: \n";
		
		cin >> coe; 
		
		if (coe=='s'){
			
			cout << "\n";
			
			system ("cls");
			
			cout << "REINICIANDO O SISTEMA... \n";
			
			system("pause");
			
			system("cls");
			
			goto foda;
			
			cout << "\n";
			
		}else if(coe=='n'){
			
			cout << "\n";
			
			system ("cls");
			
			cout << "OBRIGADO POR UTILIZAR NOSSOS SERVICOS! \n";
			
			cout << "\n\n";
			
			cout << "CELESTINO DEV - 2019 ® \n"; 
			
			cout << "\n";
			
			system ("pause");
		
}
		
		break;
		
}
		
			
	
	
}


	
	
	
	
			

				
				
			
	
	
	
	
	
	

