// DESENVOLVIDO POR: MARCOS ANDRE 

#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){

	int Lin,Col;
	
	cout << "MATRIZ: LINHA" << endl; 
	cin >> Lin;
	cout << "MATRIZ: COLUNA" << endl;
	cin >> Col; 

	float matriz[Lin][Col];
	float vetorA[Col];
	float vetorB[Lin];
	
	for (int i=0;i<Lin;i++){
		for (int j=0;j<Col;j++){
			cout << "DIGITE O VALOR DO INDICE " << i+1 << "x" << j+1 << endl;
			cin >> matriz[i][j];
}			
}
	cout << "\n";
	for (int i=0;i<Lin;i++){
		for (int j=0;j<Col;j++){
				cout << matriz[i][j] << "  "; 
}
cout << endl;
}
		for (int i=0;i<Lin;i++){
			for (int j=0;j<Col;j++){
			 vetorA[j] += matriz[i][j];
       		 vetorB[i] += matriz[i][j];
}
}
		for (int j=0;j<Col;j++){
			cout << "\n";
			cout << "SomaColuna" << j+1 << ": " <<  vetorA[j] << "  ";
}
			cout << endl; 
			for (int i=0;i<Lin;i++){
			cout << "\n";
			cout << "SomaLinha" << i+1 << ": " <<  vetorB[i] << "  ";
}

}
