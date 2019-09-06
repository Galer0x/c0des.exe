#include <iostream>
#include <stdlib.h>

using namespace std;


int main (){
	
	string nome;
	int n1,n2;
	double media,mediaf;
	
	cout << "SEJA BEM VINDO NESSA PORRA ! \n";
	
	cout << "POR FAVOR, DIGITE SEU NOME ABAIXO: \n";
	
	cin >> nome; 
	
	cout << "\n";
	
	cout << "OK, " << nome << " AGORA VAMOS CALCULAR SUA MEDIA ! ";
	
	cout << "\n";
	
	cout << "POR FAVOR, DIGITE SUA NOTA 1 ABAIXO\n";
	
	cin >> n1;
	
	cout << "\n";
	
	cout << "AGORA SUA NOTA 2:\n";
	
	cin >> n2;
	
	media=(n1+(n2*2))/3;
	
	cout << "\n";
	
	if(media>=7){
		
		cout << "\n";
		
		cout << nome << " SUA SITUACAO FINAL EH: A P R O V A D O \n";
		cout << "COM MEDIA: " << media << " MEUS PARABENS !!!! \n";
		
		
		
		
	}else if (media<4){
		
		cout << "\n";
		
		cout << nome << " INFELIZMENTE INFORMAMOS QUE VOCE ESTA: R E P R O V A D O \n";
		cout << "COM MEDIA: " << media << " SINTO MUITO! \n";
		
		
		
	}else{
		
		mediaf=(10-media);
		
		cout << "\n";
		
		cout << nome << " VOCE ESTA DE PROVA FINAL! \n";
		cout << "COM MEDIA: " << media << endl;
		
		cout << "\n";
		
		cout << "VOCE PRECISA TIRAR NO MINIMO: " << mediaf << " PARA SER APROVADO NO EXAME FINAL! \n";
		cout << "PORTANTO, ESTUDE!\n";
		
		
	}
		
	
	
	
	
}
