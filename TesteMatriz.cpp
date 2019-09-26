// DESENVOLVIDO POR: MARCOS ANDRE 

#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	
	
	int Lin,Col;
	
	
	cout << "MATRIZ A: LINHA" << endl;
	cin >> Lin;
	cout << "MATRIZ A: COLUNA" << endl;
	cin >> Col;
	cout << "MATRIZ B: LINHA" << endl;
	cin >> Lin;
	cout << "MATRIZ B: COLUNA" << endl;
	cin >> Col;
	
	double matrizA[Lin][Col];
	double matrizB[Lin][Col];
	double matrizS[Lin][Col];
	
	
	for (int i=0;i<Lin;i++){
		for (int j=0;j<Col;j++){
			cout << "DIGITE O VALOR DO INDICE " << i+1 << "x" << j+1 << endl;
			cin >> matrizA[i][j];
}			
}
		for (int i=0;i<Lin;i++){
			for (int j=0;j<Col;j++){
			cout << "DIGITE O VALOR DO INDICE " << i+1 << "x" << j+1 << endl;
			cin >> matrizB[i][j];
}
}
		for (int i=0;i<Lin;i++){
			for (int j=0;j<Col;j++){
				matrizS[Lin][Col]=(matrizA[i][j] + matrizB[i][j]);
					cout << matrizS[Lin][Col] << "  "; 
}
cout << endl;
}

		
	
	
	
}
